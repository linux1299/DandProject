# DCache 架构与验证文档

## 1. 范围与当前实现

DCache 位于 Tulip LSU 与 AXI4 下级存储之间，采用 write-back、write-allocate、2-way set-associative 结构。`Tulip.scala` 现在实例化 `DCacheTop`（而非仅用于调试的 `DTCM`）；本文的参数表对应 `GenDCacheTop` 的独立 32 KB 生成配置，Tulip SoC 则使用 16 KB 配置。

| 参数 | 当前值 |
|------|--------|
| 行大小 | 64 bytes（8 × 64-bit） |
| 相联度 | 2-way |
| 独立生成容量 | 32 KB，256 sets/way |
| AXI refill / writeback | 8 beats |
| AXI bypass | 1 beat |
| 已验证 MSHR 数 | 1 |
| 写策略 | write-back + write-allocate |

地址位域（32 KB 配置）：

```
|31:14 tag (18b)|13:6 set (8b)|5:3 beat|2:0 byte|
```

数据路径如下：

```
CPU cmd
  ├─ bypass range ──> private bypass buffer ──> AXI
  ├─ tag hit ───────> SRAM
  ├─ same-line MSHR hit
  │    ├─ load: block until refill
  │    └─ store: merge data + byte strobes
  └─ miss ──────────> mshr0 -> evict -> (writeback) -> refill
```

当前只有一个 CPU response holding buffer。因此 MSHR 活跃时，除 same-line store merge 外的请求均阻塞；这优先保证响应不丢失，尚未实现 hit-under-miss 的吞吐优化。

LSU 将 `rd_wen/rd_addr/pc/instr/rob_adr` 及 `lsu_ctrl/addr_off` 随 DCache 请求带入，并由 DCache 原样带回。因此任意 miss/hit 的 load 都能在返回时做正确的字节选取、符号扩展和 ROB 写回。`mtime/mtimecmp` 不进入 DCache，而由 LSU 的一项 timer response buffer 完成。

`mshrEntries` 目前只实现 `mshr0` 的分配、SRAM 访问和 AXI 调度；配置对象已强制要求它等于 1，避免把配置大于 1 误解释为支持多个 independent outstanding miss。

## 2. 状态机和替换

`mshr0` 的状态为：

```
IDLE -> EVICT_READ -> EVICT_DONE -> REFILL_WAIT -> REFILL_DONE -> IDLE
```

- `EVICT_READ` 顺序读取受害行的 8 个 SRAM beat。
- `EVICT_DONE` 对 dirty victim 等待写回 buffer 空闲后入队，避免尚未收到 B 时覆盖前一笔写回。
- `REFILL_WAIT` 在 AR 真正握手后接收 8 个 R beat，并写回 SRAM。
- `REFILL_DONE` 更新 meta 并向 CPU 返回预先捕获的目标 beat。

受害者选择为 invalid 优先，否则按 MRU bit 选择 LRU way。当前没有额外的 clean-over-dirty 优先级；dirty victim 会进入写回流程。

## 3. 本次发现并修复的问题

### 3.1 AXI 反压下命令丢失

原实现驱动命令时就置 `ar_sent` / `wb_aw_sent`。若 `ready=0`，命令会消失但内部状态认为它已发送。

现在命令保持有效直到 Stream `fire`，并仅在真实握手后置 sent 标记。DCacheTop 对共享的 AR/AW 通道选择唯一内部请求者，只向该请求者回报 ready；bypass 请求另外暂存在私有寄存器，直到 AXI 命令真正握手。

### 3.2 满 MSHR 时不同 miss 被错误接受

原 `cpu.cmd.ready` 是寄存器，首个 miss 分配后下一拍仍可能接受不同 line 的 miss，然而没有空闲 MSHR 可保存它。

现在 ready 组合地依赖当前 MSHR 状态：MSHR 活跃时普通 hit、不同 miss 与 bypass 均保持阻塞；仅同 line store 可以合并，same-line load 等待 refill。这样不会让普通 hit 与 `REFILL_DONE` 在单一 response 端口竞争。

### 3.3 MSHR 部分 store 覆盖整 beat

`merge_data` 原先只保存 64-bit 数据，refill 时会用它替换整个 beat。byte/half/word store 因而破坏未写字节。

每个 merged beat 现在额外保存 `merge_strb`，refill 使用字节掩码合成：

```scala
(next_level.rsp.data & ~byteMask(merge_strb)) |
  (merge_data & byteMask(merge_strb))
```

### 3.4 写回 buffer 永不释放、或被覆盖

写回 B pending 的置位条件错误，首笔 dirty eviction 后 buffer 可能永久占用。即使 buffer 忙，`EVICT_DONE` 仍可能继续 refill，丢弃第二个 dirty victim。

现在 B 响应释放 buffer；dirty victim 只有在 buffer 空闲时才从 `EVICT_DONE` 进入 refill。

### 3.5 写回突发多发一个 W beat

W 通道曾被寄存器化，`wb_beat_cnt` 与 `w.last` 相差一拍，8-beat burst 实际输出 9 个 beat。W 改为由 `wb_sending` 和 `wb_beat_cnt` 组合驱动，回归固定检查每笔写回严格为 8 beats。

### 3.6 文档与实现校正

`Sram.scala` 使用 `readSync`，不是异步读。`mshr_resp_data` 的必要性来自同步 SRAM 读和 refill 后地址变化，而不是异步读行为。

### 3.7 写回数据错位

`EVICT_READ` 曾在等待同步 SRAM 读响应时持续保持读使能。这会把同一地址再次送入 SRAM，导致 write-back burst 从第二个 beat 起落后一拍，脏行数据被破坏。

现在只有在前一 SRAM 响应已被消费后才发出下一 beat 的读命令；回归会让“load miss 中合并的 byte store”经历替换和写回，逐字检查外存结果。

### 3.8 Stream response 在反压下丢失

hit、bypass R 与 refill 返回原本都可能只是单周期 `valid`。当 LSU/ROB 临时拉低 `ready` 时，数据和 sideband 会被丢弃。

DCache 现在通过一项 response holding buffer 保持 `valid` 至 `fire`，并在 buffer 入队时释放 bypass-load pending。LSU timer 路径也使用等价的一项 buffer；DCache 与 LSU 联调分别验证了 cache-hit 和 timer response 的反压保持。

### 3.9 Tulip/LSU 集成缺失

此前 `Tulip.scala` 实例化 `DTCM`，因此真实 `DCacheTop` 的 MSHR、writeback 与 AXI 仲裁并未接入 CPU；而且 Tulip 沿用了 `mshrEntries = 2` 的默认值，实际 RTL 仅实现 entry 0。LSU 对 timer 请求不发 DCache，却没有产生 `lsu_dst` 完成响应。

Tulip 现接入 `DCacheTop` 并固定 `mshrEntries = 1`；timer 访问只在 LSU 请求真正握手时更新，并返回带原始 ROB/写回信息的完成响应。`GenTulipWithMemoryInit` 因而只初始化 ICache；DCache 数据应由其外部 AXI 存储器提供。

### 3.10 Bypass store 的 AW 重发

AXI 的 AW 与 W 可以在不同周期握手。原 bypass store 只用一个合并计数判断完成；若 AW 已被接收而 W 被延迟，重新拉高的 `AWREADY` 会使同一地址重复握手。

现在分别记录 bypass AW/W 是否已握手，只有二者均完成才确认内部命令。回归刻意让 AW 在写事务活跃时仍可重新 ready，并检查一笔 bypass store 只产生一笔 AW。

## 4. 验证环境

目录：

```
simWorkspace/DCache/
├── Makefile
├── csrc/tb_DCache.cpp      # DCache 单体回归
├── csrc/tb_LSUDCache.cpp   # LSU -> DCache -> AXI 集成回归
├── csrc/tb_minimal.cpp    # 历史最小测试，未由 Makefile 使用
├── vsrc/                  # 备用 Verilog TB/内存模型
└── obj_dir/, simv         # Verilator 输出
```

运行：

```bash
cd /home/lin/DandProject/simWorkspace/DCache
make -f Makefile all
make -f Makefile test-lsu
```

`tb_DCache.cpp` 包含 8K × 64-bit 黄金内存模型。它在时钟沿前采样 AXI valid/ready，支持 AR 反压、R 延迟、AW/W/B 握手以及可配置 B 延迟，并记录每笔 AR/AW/W burst。`LSUDCacheTop` 是只用于验证的轻量集成封装，连接真实 LSU、DCacheTop 与 AXI；它不依赖前端和 ROB。

旧环境不足以验证设计：Makefile 只编译三次读请求的 `tb_minimal.cpp`，且没有把 `ar_ready/aw_ready/w_ready` 驱回 DUT；旧 `tb_DCache.cpp` 的 `main` 也没有调用已定义的场景函数。因此它会把未握手却被标记为已发送的实现误判为通过。

## 5. 当前回归覆盖

最近一次执行结果：DCache 单体 **PASS，0 failure，911 cycles**；LSU-DCache 集成 **PASS，0 failure，99 cycles**。`GenDCacheTop`、`GenLSUDCacheTop` 与 `GenTulip` 均已成功生成 Verilog。

| 类别 | 断言内容 |
|------|----------|
| DCache 基础 | AR 反压下 cold load；单个 8-beat refill；同 line hit 不产生额外 AR；cache-hit response 反压保持 |
| MSHR | 满 MSHR 时不同 miss 阻塞并串行发出；refill 中同 line byte store 合并；合并后的脏行替换写回 |
| 写回 | 同 set dirty replacement；长 B 延迟下连续两次 dirty eviction；buffer 释放；每笔写回严格 8 W beats |
| Bypass | AR 反压下单 beat load；store early response；AW/W 分离反压下恰发一笔 AW；store 后 load 的内存一致性 |
| LSU-DCache | LB/LBU/LH/LHU/LW/LWU/LD 对齐及符号扩展；SB/SH/SW 掩码；所有写回 sideband；cache-hit 反压保持 |
| Timer | `mtimecmp` store/load 的完成响应、sideband、LSU destination 反压保持，以及确认不产生 AXI cache 流量 |

共计 55 项 PASS 检查（DCache 31 项、LSU-DCache 24 项）。

## 6. 已知限制与后续验证

1. **Dirty flush 会丢数据**：flush 直接清除 meta，未写回 dirty line。调用方必须先确保 cache clean；若作为通用 write-back cache，需要独立的 flush-writeback FSM。
2. **多 MSHR 尚未实现**：`mshrEntries > 1` 没有多 miss 分配和调度能力。
3. **AXI error 未上报**：R channel `r_resp` 未处理；写回 B 非 OKAY 会保留 buffer，但没有 CPU 可见的错误恢复路径。
4. **未支持非对齐访问**：LSU 的 wstrb/data 仅覆盖当前 64-bit beat；跨 beat 的 load/store 会截断，且没有产生 RISC-V address-misaligned exception 或拆分访问。
5. **地址范围是 32-bit**：LSU 计算 64-bit 有效地址后缩为 32 bit，超出 4 GiB 的地址会被截断。
6. **`DCachePorts.stall` 是遗留字段**：当前有效流控是 `cmd.ready/rsp.valid`；`stall` 没有由 DCacheTop 产生，外部逻辑不应依赖它，后续宜移除或定义其精确语义。
7. **尚未覆盖**：随机 AW/W/R/B 反压、flush writeback、长随机黄金模型压力，以及 cache refill 与 bypass 同时存在时的仲裁。

## 7. 文件索引

| 文件 | 说明 |
|------|------|
| `hw/spinal/dandriscv/tulip/DCache.scala` | DCache 与 AXI wrapper RTL |
| `hw/spinal/dandriscv/tulip/LSU.scala` | LSU 数据对齐、timer 和 DCache 往返 |
| `hw/spinal/dandriscv/tulip/Tulip.scala` | Tulip 中 DCacheTop 的实际集成 |
| `hw/spinal/dandriscv/tulip/LSUDCacheTop.scala` | LSU-DCache 集成验证封装与生成器 |
| `hw/spinal/dandriscv/tulip/Sram.scala` | 同步读 SRAM |
| `hw/spinal/dandriscv/tulip/Config.scala` | DCache 配置 |
| `hw/spinal/dandriscv/tulip/Interfaces.scala` | CPU/下级接口和 sideband |
| `simWorkspace/DCache/csrc/tb_DCache.cpp` | 当前回归和黄金内存 |
| `simWorkspace/DCache/csrc/tb_LSUDCache.cpp` | LSU-DCache 集成回归 |
| `simWorkspace/DCache/Makefile` | Verilator 构建入口 |
| `hw/gen/DCacheTop.v` | 由 `GenDCacheTop` 生成的 Verilog |
