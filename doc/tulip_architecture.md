# Tulip CPU 架构文档

本文描述 `hw/spinal/dandriscv/tulip` 中的当前实现，默认配置以
`Tulip.scala`、`Config.scala` 和 `Predictor.scala` 为准。独立模块生成器可能采用不同容量，
例如 `GenDCacheTop` 生成 32 KiB DCache，而 Tulip 核内实际配置为 16 KiB。

## 1. 架构定位

Tulip 是一个使用 SpinalHDL 实现的 RV64 顺序双发射处理器核。前端、调度和 ROB 分配保持
程序顺序；5 个执行端口可以以不同延迟完成并写回；16 项 ROB 最终按序、每周期最多退休
2 条指令。

Tulip 没有物理寄存器文件和空闲列表。`Dispatch` 维护的是每个架构寄存器的最新生产者、
ROB 地址和所在阶段，因此更准确的描述是“记分牌式依赖跟踪”，而不是完整的物理寄存器重命名。

### 当前默认参数

| 参数 | 当前值 |
|------|--------|
| 实现语言 | Scala 2.13.11 + SpinalHDL 1.8.1 |
| 数据宽度 | XLEN = 64 |
| PC / 存储地址宽度 | 32 bit |
| 复位入口 | `0x8000_0000` |
| 指令范围 | RV64 整数运算、M 扩展乘除法、分支/访存，以及部分 M-mode CSR/系统指令 |
| 前端宽度 | 每次取 64 bit，拆成 2 条 32-bit 指令 |
| Dispatch / Commit 宽度 | 最多 2 条/周期 |
| ROB | 16 项 |
| 架构寄存器文件 | 32 × 64 bit，4 读 2 写，`x0` 恒为 0 |
| 执行端口 | BJU ×1、ALU ×2、MUL/DIV ×1、LSU ×1 |
| 分支预测 | 双 PC TAGE + BTB + RAS；译码期静态 JAL 预测可覆盖动态结果 |
| 指令存储 | 默认启用 ITCM：`2^18 × 32 bit` 双端口 SRAM，即 1 MiB |
| 数据缓存 | 16 KiB、2-way、64 B/line、write-back、write-allocate、1 个 MSHR |
| 下级总线 | 指令 AXI4 ReadOnly + 数据 AXI4 ReadOnly/WriteOnly，32-bit 地址、64-bit 数据 |
| 特权范围 | M mode；ECALL、EBREAK、MRET 和 machine timer interrupt |

这里的“7 级流水”是逻辑分段：

```text
Fetch -> Decode -> PreDispatch -> Dispatch -> Execute -> Writeback -> Commit
  F        D           I            R          E           W          C
```

模块之间使用 SpinalHDL `Stream` 的 valid/ready 反压。缓存 miss、除法和下游退休反压会让
实际指令延迟超过 7 拍。

## 2. 顶层数据流

```text
                     +---------------- Predictor ----------------+
                     |       TAGE + BTB + RAS + static JAL       |
                     +------------------+-------------------------+
                                        |
                                        v
ITCM/ICache -> Fetch -> Decode -> PreDispatch -> Dispatch
                                                      |
                   +---------------+------------------+----------+----------+
                   |               |                  |          |          |
                  BJU             ALU0               ALU1      MUL/DIV     LSU
                   |               |                  |          |          |
                   +---------------+------------------+----------+----------+
                                        |
                                  5 路 Writeback
                                        |
                                   16-entry ROB
                                        |
                                  双路 Commit -> ARF
                                                                    |
                                               DCache/Timer <-------+
                                                     |
                                                  AXI4 data
```

顶层 `change_flow` 由 BJU 的异常/中断跳转或分支重定向产生。它会清空 Fetch FIFO 和
`PreDispatchBuffer`，并在 Decode/Dispatch 输入处丢弃错误路径指令。两路指令都可以映射到
唯一的 BJU；当 slot 0 本身是 BJU 时，顶层会阻止同组 slot 1 前进，从而简化控制流恢复。

## 3. 流水线

### 3.1 Fetch — `Fetch.scala`

`Fetch_kernel` 从 `0x8000_0000` 开始取指，每次向指令存储发送一个 64-bit 请求；顺序路径
的 PC 每次增加 8。取指状态机为 `IDLE -> FETCH <-> HALT`，在指令端反压或内部 FIFO
空间不足时进入 `HALT`。

Fetch 使用 4 组深度为 8 的 FIFO 对齐：

- 取指 PC；
- 64-bit 指令数据；
- 预测目标 PC；
- taken 预测结果。

64-bit 返回数据随后拆为两路：slot 0 为低 32 bit、PC 为基地址；slot 1 为高 32 bit、
PC 为基地址加 4。中断优先于分支重定向，分支重定向优先于预测跳转。

### 3.2 Decode — `Decode.scala`

两套 `DecodeComb` 并行解析 opcode、funct、寄存器和立即数，输出 `MicroOp` 与执行单元选择。
当前可见的主要指令组为：

- RV64 整数算术、逻辑、移位和 word 运算；
- `MUL/MULH/MULHSU/MULHU/MULW` 与 `DIV/REM` 的有符号、无符号和 word 变体；
- `LB/LBU/LH/LHU/LW/LWU/LD` 与 `SB/SH/SW/SD`；
- `BEQ/BNE/BLT/BGE/BLTU/BGEU/JAL/JALR/AUIPC`；
- `CSRRW/CSRRS/CSRRC` 及立即数变体、`ECALL/EBREAK/MRET`。

浮点、原子和压缩指令没有执行路径；FENCE 和非法指令异常也尚未完整实现。因此本文不把
Tulip 标记为完整的 RV64IMAFD 实现。

### 3.3 PreDispatch — `PreDispatchBuffer.scala`

该模块包含两个锁步更新的 entry，并在指令进入时读取 ARF。若同拍有退休写回命中源寄存器，
退休数据优先于 ARF 读值，以消除读写同拍歧义。

它还把指令编码到 5 个执行端口：

| `exe_oh` | 执行端口 | 分配规则 |
|----------|----------|----------|
| `00001` | BJU | 分支、跳转、CSR、异常和 Difftest 特殊指令 |
| `00010` | ALU0 | slot 0 的普通 ALU 指令 |
| `00100` | ALU1 | slot 1 的普通 ALU 指令 |
| `01000` | MUL/DIV | 两个 slot 共享 |
| `10000` | LSU | 两个 slot 共享 |

### 3.4 Dispatch — `Dispatch.scala`

Dispatch 每周期最多接受两条指令，并保证新指令只有在老指令已经可分发或不存在时才能分发。
同一执行端口冲突时老指令优先；同组 slot 1 对 slot 0 的 RAW 依赖会阻塞。ROB 少于两个空项
时，`rob_is_ready` 拉低，停止新分配。

每个架构寄存器有一个状态：

```text
ARF -> EXE -> BUF/WBC -> ROB -> RET -> ARF
```

| 状态 | 含义与取数方式 |
|------|----------------|
| `ARF` | 已提交值位于架构寄存器文件 |
| `EXE` | 最新生产者已分发；ALU/BJU 可走执行旁路，MUL/DIV/LSU 需要等待 |
| `BUF` | ALU/BJU 结果暂存在 3 项执行结果 buffer，可旁路 |
| `WBC` | 长延迟单元等待写回；依赖者保持阻塞 |
| `ROB` | 结果已写入 ROB，可从 ROB 读端口取数 |
| `RET` | 已从 ROB 完成，退休数据可在写回 ARF 前旁路 |

ROB 地址与寄存器号共同区分同一架构寄存器的不同版本，避免旧写回覆盖新生产者状态。

### 3.5 Execute / Writeback

执行单元可以独立完成，统一通过 5 路 `ExeDst` Stream 写入 ROB：

- BJU 和两个 ALU 提供组合执行旁路，并各有一个结果保持路径；
- 乘法在共享 MUL/DIV 单元中计算并寄存结果；
- 除法通过 `Divider.scala` 包装的 `div_gen_0` RTL/IP 完成，是多周期操作；
- LSU 的完成时间由 timer、DCache hit、bypass 或 refill 决定。

### 3.6 Commit — `Commit.scala`

ROB 使用带回卷位的 head/tail 指针管理 16 项循环队列。Dispatch 按程序顺序分配一项或两项；
5 个执行端口按 ROB 地址写回结果；只有 head 以及紧随其后的 head+1 都已完成时，才能依次退休。

`retire_ready_0/1` 是顶层测试接口。退休 Stream 被反压时，ROB head 保持不动；退休成功后，
最多两个结果写回 ARF，并同步更新 Dispatch 的寄存器状态。

## 4. 执行单元

### BJU

`BJU.scala` 完成条件分支、JAL/JALR、AUIPC、CSR 和异常/返回处理。它比较真实的 taken/target
与随指令携带的预测结果：不一致时产生 `redirect_valid` 和正确目标，并向预测器提供训练信息。

CSR/CLINT 逻辑位于 `Exception.scala`，内部状态覆盖 `mstatus`、`mie`、`mtvec`、`mepc`、
`mcause`、`mtval`、`mip`、`mcycle`、`mhartid` 和 `mscratch` 等寄存器，但各 CSR 的读写支持
并不完全对称。异常与中断在 BJU 执行阶段触发，并不代表已经实现完整的 RISC-V 特权架构或
所有精确异常场景。

### ALU ×2

两个 ALU 支持加减、比较、逻辑、移位、LUI 及 RV64 word 结果的符号扩展。slot 0 和 slot 1
分别静态映射到 ALU0 和 ALU1，因此两条无依赖 ALU 指令可以同拍分发。

### MUL/DIV

M 扩展共享一个端口。乘法覆盖 low/high、signed/unsigned 和 `MULW`；除法器包装
`hw/verilog/exu/div_gen_0.v`，并在 busy 期间阻止下一条 MUL/DIV 指令进入。

### LSU

LSU 第一级计算 64-bit 有效地址、访问大小、store 数据与 byte strobe，再把地址缩为 32 bit
送入 DCache。DCache 返回的 `addr_off` 和 LSU 操作类型 sideband 用于第二级 load 对齐及符号/
零扩展。

`mtime` 和 `mtimecmp` 由 LSU 内部 Timer 处理，不进入 DCache：

| 寄存器 | 地址 |
|--------|------|
| `mtime` | `0x0200_bff8` |
| `mtimecmp` | `0x0200_4000` |

timer 与 DCache 返回都使用一项 response holding buffer，在 ROB 反压时保持结果直到握手。

## 5. 分支预测

当前 `Tulip.scala` 实例化统一 `Predictor`，其动态预测器是 `tage_predictor`，不是同目录中保留的
旧 `gshare_predictor`。`CpuConfig.BPU_TYPE = "gshare"` 也是遗留配置，当前没有控制顶层实例选择。

### TAGE 默认配置

| 参数 | 值 |
|------|-----|
| Bimodal table | 256 项，2-bit counter |
| Tagged tables | 5 张 |
| 每表项数 | 128、128、64、64、32 |
| 历史长度 | 4、8、16、32、64 |
| Tag 宽度 | 8 bit |
| 预测计数器 | 3 bit |
| Useful 计数器 | 2 bit |
| BTB | 4 项 |
| RAS | 4 项 |

TAGE 同时查询 `PC` 和 `PC+4`：slot 0 预测 taken 时优先选择 slot 0，否则允许 slot 1 的
BTB/TAGE 结果改变下一个 64-bit 取指地址。预测结果经过一级寄存器以改善时序。

BTB 记录源 PC、目标 PC 以及 call/ret/jump 类型；RAS 同时维护推测指针和执行阶段确认指针，
在误预测训练时恢复。取指数据返回后，静态预测器识别 JAL 并可覆盖动态预测结果。条件分支、
JALR 和跳转在 BJU 执行时训练 TAGE/BTB/RAS。

## 6. 存储系统

### 指令侧：当前为 ITCM

顶层构造为 `ICacheTop(itcm_en = true, ...)`。当前路径是一块 `2^18 × 32 bit` 双端口同步
SRAM；两个端口读取相邻 32-bit word，合并为 64-bit fetch bundle。SRAM 索引使用
`PC[19:2]`，容量为 1 MiB；更高地址位不参与索引，因此不同的 1 MiB 地址窗口会发生别名。
仿真环境通常直接初始化该 SRAM。

`ICache.scala` 仍包含可选的 16 KiB、2-way、64 B/line cache 实现；只有把 `itcm_en` 改为
`false` 才会通过 instruction AXI 发起 8-beat refill。默认 ITCM 配置下顶层仍保留 instruction
AXI 端口，但不会产生 AR 请求。

### 数据侧：16 KiB DCache

Tulip 当前实例化 `DCacheTop`，不再实例化 `DTCM` 或 `BIUTop`。16 KiB 配置的地址分解为：

```text
|31:13 tag (19b)|12:6 set (7b)|5:3 beat (3b)|2:0 byte (3b)|
```

主要特性：

- 2-way set associative，64 B/line，8 个 64-bit beat；
- write-back + write-allocate；invalid way 优先，否则选择非 MRU way；
- 1 个有效 MSHR，refill 和 writeback 均为 8-beat AXI burst；
- refill 期间允许同 cache line 的 store 按 byte strobe 合并；
- MSHR 活跃时不支持普通 hit-under-miss，其他请求串行等待；
- 一项 CPU response holding buffer，保证下游反压时响应不丢失；
- `0x1000_0000` 到 `0x3fff_ffff` 为有效 bypass 区域，直接执行单 beat AXI 访问。

更完整的状态机、反压修复、回归覆盖和限制见
[DCache 架构与验证文档](dcache_architecture.md)。

### 顶层 AXI 接口

| 接口 | 类型 | 当前用途 |
|------|------|----------|
| `icache` | AXI4 ReadOnly，64-bit data | ITCM 模式下保持空闲；cache 模式用于 refill |
| `dcache` read | AXI4 ReadOnly，64-bit data | DCache refill 与 bypass load |
| `dcache` write | AXI4 WriteOnly，64-bit data + strobe | dirty writeback 与 bypass store |

所有地址接口均为 32 bit，AXI ID 宽度为 2 bit。

## 7. 控制流、异常与退休约束

控制流优先级为：

```text
interrupt > redirect/mispredict > predicted taken > sequential PC+8
```

当前异常/中断范围：

| 类型 | `mcause` |
|------|----------|
| ECALL from M-mode | 11 |
| EBREAK | 3 |
| Machine timer interrupt | `0x8000_0000_0000_0007` |

`MRET` 跳转至 `mepc` 并恢复 `mstatus.MIE`。Tulip 没有外部中断输入，也未实现 S/U mode、
页表、地址翻译或完整的非法指令/访存错误异常。

## 8. 性能计数器

`Tulip.scala` 和部分流水级中保留了面向仿真的内部计数器，包括：

- cycle 与 retired instruction 计数；
- Fetch、PreDispatch、Dispatch 两个 slot 的 valid/ready/fire 计数；
- 分支改流、BJU 指令和 slot 1 因 BJU 停顿计数；
- 5 个执行端口及汇总写回停顿计数；
- Dispatch 操作数未就绪、端口竞争和顺序约束停顿计数。

这些计数器当前不是软件可见 CSR，也没有独立顶层输出，主要通过仿真层次路径观察。

## 9. 生成与验证

从仓库根目录生成 Tulip Verilog：

```bash
sbt "runMain dandriscv.tulip.GenTulip"
```

输出位于 `hw/gen/Tulip.v`。`GenTulipWithMemoryInit` 会使用源码中写死的 CoreMark 二进制路径
初始化 ITCM，仅适合本仓库当前目录布局和对应软件产物。

Tulip 的 Verilator + Difftest 入口：

```bash
source ./env.sh
make -C dv tulip
```

DCache 单体与 LSU-DCache 集成回归需要先生成对应 RTL：

```bash
sbt "runMain dandriscv.tulip.GenDCacheTop"
sbt "runMain dandriscv.tulip.GenLSUDCacheTop"
make -C simWorkspace/DCache all
make -C simWorkspace/DCache test-lsu
```

## 10. 已知限制

1. 数据和指令地址接口只有 32 bit；LSU 的 64-bit 有效地址会截断到低 32 bit。
2. 默认指令侧依赖 ITCM 预加载，instruction AXI 在当前配置下不取外部程序；ITCM 忽略
   `PC[31:20]`，不同 1 MiB 窗口会映射到同一 SRAM 内容。
3. 未实现浮点、原子、压缩、虚拟内存、S/U mode 和完整的非法指令异常。
4. 非对齐或跨 64-bit beat 的 load/store 不会拆分，也没有 address-misaligned exception。
5. DCache 只有 1 个 MSHR，不支持普通 hit-under-miss；dirty flush 尚不会先写回脏行。
6. AXI R/B error 没有形成 CPU 可见异常。
7. 除法依赖仓库内 `div_gen_0.v`/对应 IP 行为，移植时必须一起纳入 RTL 文件列表。
8. `BPU_TYPE` 与旧 `gshare_predictor.scala` 当前未参与顶层选择，修改预测器应直接检查
   `Predictor.scala` 和 `Tulip.scala`。

## 11. 文件索引

| 文件 | 作用 |
|------|------|
| `Tulip.scala` | 顶层实例化、互联、AXI 端口与性能计数器 |
| `Config.scala` | CPU、cache、TAGE/BTB/RAS 配置和生成参数 |
| `Interfaces.scala` | 流水线、缓存和执行单元 Bundle/枚举 |
| `Fetch.scala` | 64-bit 取指、FIFO 对齐和双路拆分 |
| `Decode.scala` | 双路组合译码与 MicroOp 生成 |
| `PreDispatchBuffer.scala` | 两项预分发 buffer、ARF 读取和端口编码 |
| `Dispatch.scala` | 顺序双分发、记分牌、依赖检查和旁路 |
| `Commit.scala` | 16 项 ROB、5 路写回和双路按序退休 |
| `Predictor.scala` | 当前 TAGE、双 PC BTB/RAS 和静态 JAL 预测 |
| `gshare_predictor.scala` | 保留但未由 Tulip 顶层使用的旧 Gshare 实现 |
| `BJU.scala` / `Exception.scala` | 控制流、CSR、异常与 timer interrupt |
| `ALU.scala` | 两个整数 ALU 使用的实现 |
| `DIV.scala` / `Divider.scala` | 共享 MUL/DIV 执行端口与除法 IP 包装 |
| `LSU.scala` | 地址生成、对齐、Timer 和 DCache sideband |
| `DCache.scala` | 当前 write-back DCache、MSHR、bypass 与 AXI wrapper |
| `ICache.scala` | 默认 ITCM 和可选 ICache |
| `Sram.scala` | 同步 SRAM 包装 |
| `LSUDCacheTop.scala` | LSU-DCache 联调生成顶层 |
