# Tulip CPU 架构文档

## 概述

Tulip 是一个使用 SpinalHDL 硬件描述语言实现的 **顺序双发射 RISC-V (RV64)** CPU 处理器核。它采用 **7 级流水线**设计，支持**按序发射（In-Order Dispatch）**、**乱序写回（Out-of-Order Writeback）** 并通过 **ROB（ReOrder Buffer）** 实现**按序退休（In-Order Commit）**。

### 核心参数

| 参数 | 值 |
|------|-----|
| ISA | RV64（IMAFD 子集，M 模式） |
| 发射宽度 | 2 条指令/周期 |
| 流水线级数 | 7 级 |
| ROB 深度 | 16 项 |
| 寄存器文件 | 32 × 64 位（x0 恒为 0） |
| 分支预测器 | Gshare（默认）或静态预测 |
| 分支历史长度 | 5 位 |
| PHT 项数 | 32 项 |
| BTB 项数 | 4 项 |
| RAS 深度 | 4 项 |
| ICache | 16KB，2 路组相联（64B/行），AXI 接口 |
| DCache | 16KB，2 路组相联（64B/行），AXI 接口（带 bypass 区域） |
| 特权级 | 仅 M 模式（Machine Mode） |
| 中断/异常 | ECALL, EBREAK, MRET, 定时器中断 (MTIME/MTIMECMP) |

---

## 流水线结构

Tulip 的流水线分为以下 7 个阶段：

```
取指(F) → 译码(D) → 发射(I) → 调度(Dispatch/R) → 执行(E) → 写回(W) → 退休(Commit/C)
```

### 流水线阶段详解

#### 1. 取指阶段 (F) — `Fetch.scala`

- **Fetch_kernel**: 核心取指逻辑
  - PC 寄存器初始化为 `0x80000000`
  - 每个周期向 ICache 发送 8 字节读取命令（地址按 8 递增）
  - 使用 FSM 管理取指状态（IDLE → FETCH → HALT）
  - 包含三个 FIFO（各深度 8）分别缓存 PC、指令、分支预测结果
  - 支持刷新（Flush）：中断、重定向（预测错误）时清空 FIFO

- **Fetch**（外层封装）:
  - 将 Fetch_kernel 输出的 64 位指令流通过 `StreamFork2` 拆分为两路 32 位指令
  - 指令 0 = `fch_dst.instr[31:0]`，指令 1 = `fch_dst.instr[63:32]`（PC+4）
  - 向 BPU 提供 `predict_pc` 和 `predict_valid` 信号
  - 接收 BPU 的 `branch_taken` 和 `branch_pc` 做分支预测取指

#### 2. 译码阶段 (D) — `Decode.scala`

- **DecodeComb**: 单条指令的组合逻辑译码器
  - 解析 RISC-V 标准指令格式（opcode, rd, rs1, rs2, func3, func7）
  - 生成 `MicroOp`（微操作码），包含：
    - `MicroOpCommon`: `rd_wen`, `src2_is_imm`
    - `MicroOpAlu`: `alu_ctrl_op`, `alu_is_word`
    - `MicroOpBju`: `bju_ctrl_op`, `exp_ctrl_op`, CSR 地址等
    - `MicroOpLsu`: `lsu_ctrl_op`, `is_load`, `is_store`
  - 选择执行单元：LSU / DIV / ALU / BJU
  - 立即数生成：支持 I/S/B/U/J/CSR 类型立即数
  - 所有算术/逻辑/分支/访存指令全覆盖

- **Decode**（外层封装）:
  - 实例化 2 个 DecodeComb 并行译码
  - 输出 Stream[IssueSrc] 至发射阶段

#### 3. 发射阶段 (I) — `Issue.scala`

- 2 项发射缓冲区（`IssueEntry`)
- 指令进入条件：两条发射槽都 ready 才同时更新
- 分配执行单元编码（exe_oh，5-bit onehot）：
  - BJU → `00001`（固定槽 0）
  - ALU → `00010`（槽 1）/ `00100`（槽 2）
  - DIV → `01000`（槽 3）
  - LSU → `10000`（槽 4）
- 发射优先级：同时准备好时，两条指令同时发射
- 槽 1 的 `exe_oh` 编码时 ALU0/ALU1 按序号分配

#### 4. 调度阶段 (Dispatch/R) — `Dispatch.scala`

这是 Tulip 最复杂的阶段，负责**寄存器重命名/依赖追踪**和**操作数准备**。

- **物理状态表（32 项）**:
  - 每个架构寄存器（x0–x31）都有一个当前状态
  - 状态机：`ARF → EXE → BUF → WBC → ROB → RET`
    - **ARF**: 值在架构寄存器文件中
    - **EXE**: 正在执行单元中计算
    - **BUF**: 执行完成但写回缓冲暂存（ALU/BJU 的一次缓存）
    - **WBC**: 回写至 ROB
    - **ROB**: 已写回 ROB，等待退休
    - **RET**: 已退休，写回 ARF

- **操作数准备**:
  - 从多个源转发数据：
    - ARF（寄存器文件）+ EXE（执行旁路）+ BUF（写回缓冲）+ WBC + ROB + RET
  - 通过 `dataMux` 多路选择器进行数据选择
  - `src1_valid`/`src2_valid` 指示操作数是否就绪

- **执行单元分发**:
  - 将指令分发到 5 个执行单元的 Stream：
    - BJU 流、ALU1 流、ALU2 流、DIV 流、LSU 流
  - 两条发射槽中的旧指令（issue0）优先级更高
  - 槽 1 检测与槽 0 的寄存器依赖性（RAW 冲突）

- **写回缓冲（BUF）**:
  - 为 ALU/BJU 执行结果提供 3 项旁路缓冲
  - 解决执行结果到调度的额外转发延迟
  - 包含老化仲裁（rob_order 比较，新值覆盖旧值）

#### 5. 执行阶段 (E)

##### BJU (Branch/Jump Unit) — `BJU.scala`

处理所有分支/跳转和 CSR 指令：
- 分支指令：BEQ, BNE, BLT, BGE, BLTU, BGEU
- 跳转指令：JAL, JALR
- AUIPC 指令
- CSR 读写指令
- 异常指令：ECALL, EBREAK, MRET

**功能**：
- 计算实际跳转目标地址并比较预测结果
- `redirect_valid`: 预测错误时通知 Fetch 重定向
- 更新分支历史用于 BPU 训练
- RAS（返回地址栈）的 push/pop 逻辑
- 中断/异常产生

**CSR 子系统**：
- `CsrRegfile`: M 模式标准 CSR（mstatus, mie, mtvec, mepc, mcause 等）
- `Clint`: 核心本地中断控制器，处理 ECALL/EBREAK/Timer/MRET

##### ALU — `ALU.scala`

两个相同的 ALU 实例（alu_1, alu_2）：
- 算术运算：ADD, SUB, SLT, SLTU
- 逻辑运算：XOR, SLL, SRL, SRA, AND, OR
- LUI 指令
- 乘法运算：MUL, MULH, MULHSU, MULHU, MULW（组合逻辑实现）
- Word 模式：ADDW, SUBW, SLLW, SRLW, SRAW 等

##### DIV — `DIV.scala`

独立除法单元：
- 除法/取模：DIV, DIVU, REM, REMU，以及 Word 变体
- 调用 Xilinx IP 核（div_gen_0）通过黑盒（BlackBox）例化
- 多周期操作，提供 busy/done 握手

##### LSU (Load/Store Unit) — `LSU.scala`

2 级流水线的访存单元：
- **Stage 0**:
  - 计算虚拟地址（基址 + 偏移）
  - 处理写数据对齐（SB/SH/SW/SD 的字节掩码和移位）
  - 发送请求到 DCache
  - 检测是否为 Timer 地址（MTIME/MTIMECMP）
- **Stage 1**:
  - 数据对齐和符号/零扩展（LB→LBU, LH→LHU, LW→LWU 等）
  - 支持所有 RV64 访存操作

**Timer 模块**：
- 内部集成 memory-mapped 定时器
- mtime 每个周期递增
- 当 mtime ≥ mtimecmp 时触发中断

#### 6. 写回阶段 (W)

写回阶段整合在执行单元的出口（`ExeDst` Stream）：
- 执行单元完成计算后将结果发送至 ROB
- 同时旁路给 Dispatch 阶段用于后续指令的 RAW 解决
- Commit 模块的 `wbc_src` 接收 5 个执行单元的写回结果

#### 7. 退休阶段 (Commit/C) — `Commit.scala`

基于 ROB 的按序退休机制：

- **ROB 结构**: 16 项循环缓冲区
  - 每项存：PC, 指令, valid, rd_data, rd_vld, rd_addr, rd_wen
  - `head_ptr`（退役指针）和 `tail_ptr`（分配指针）管理

- **工作流程**:
  1. **分配**: Dispatch 阶段送入指令信息 → 写入 tail_ptr 位置
  2. **写回**: 执行单元完成 → 标记 `rd_vld`
  3. **完成(Complete)**: head_ptr 位置的指令已写回 → 可以退休
  4. **退休(Retire)**: 两路每周期退休 2 条指令 → 写回 ARF 寄存器文件

- **控制信号**:
  - `rob_is_ready`: ROB 有空闲空间
  - `tail_adr_older`/`tail_adr_newer`: 分配地址（供 Dispatch 分配 ROB 槽位）

---

## 模块互联与数据流

### 顶层连接 — `Tulip.scala`

```
Fetch → Decode → Issue → Dispatch → [BJU, ALU0, ALU1, DIV, LSU] → Commit → Regfile
                           ↑                 ↓                              ↓
                           └───── 旁路网络 (Forwarding) ←───────────────────┘
```

**关键连接**：

1. **取指路径**: `fetch → icache`（指令缓存读）
2. **刷新/重定向**: `bju_0.interrupt_valid` 和 `bju_0.redirect_valid` 组成 `change_flow`，全局刷新流水线
3. **分支预测**: `fetch → bpu → fetch`（预测环）
4. **发射控制**:
   - 槽 0 为 BJU 时（`issue0_dst_is_bju`），槽 1 暂停
   - `branch_valid` 时丢弃槽 1 的指令（分支后的指令无效）
5. **写回分发**: 5 个执行单元的结果 → Commit（WBC 输入）
6. **退休写回**: Commit → Regfile（两路写端口）

### 执行单元槽位分配

| 槽位 | 执行单元 | exe_oh 编码 |
|------|---------|------------|
| 0 | BJU | 5'b00001 |
| 1 | ALU_1 | 5'b00010 |
| 2 | ALU_2 | 5'b00100 |
| 3 | DIV | 5'b01000 |
| 4 | LSU | 5'b10000 |

- 映射为 Dispatch 中的 5 路分发 Stream
- BJU 固定在槽 0，保证分支指令第一时间处理
- 两条 ALU（槽 1 和槽 2）提供双发射 ALU 吞吐
- 长延迟操作（DIV、LSU）不影响其他执行单元的 forward

---

## 寄存器文件与旁路网络

### 架构寄存器文件 (ARF) — `Regfile.scala`

- 32 × 64 位寄存器，x0 硬连线为 0
- 2 读端口 + 2 写端口
- 写端口来自 Commit 阶段的退休指令

### 旁路网络 (Forwarding)

Dispatch 阶段实现了完整的 7 路数据转发：

| 转发源 | 来源阶段 | 优先级 |
|--------|---------|-------|
| ARF | 寄存器文件 | 最低 |
| EXE | ALU/BJU 执行单元输出（组合逻辑旁路） | 中高 |
| BUF | 写回缓冲（暂存执行结果） | 中 |
| WBC | 写回至 ROB（通过 exe_dst fire） | 中 |
| ROB | ROB 中的指令数据 | 中低 |
| RET | 退休阶段写回的数据 | 低 |

- Dispatch 检测源寄存器状态（`entry.state(rs1/2_addr)`）选择正确的转发路径
- 对于 `EXE` 状态的寄存器，ALU/BJU 的 1 拍结果可通过 EXE 和 BUF 转发

---

## 存储子系统

### ICache — `ICache.scala`

- 配置：16KB，2 路组相联，每行 64 字节
- 替换策略：MRU（Most Recently Used）
- 使用 2 个 bank（32 位宽）组成 64 位读取
- 二级接口：AXI4 只读（64 位数据总线，支持 INCR burst）
- 支持 **ITCM 模式**：直接 TCM SRAM 访问（当前配置启用）

### DCache — `DCache.scala`

- 配置：16KB，2 路组相联，每行 64 字节
- 替换策略：MRU + Round-Robin 仲裁（OHMasking）
- 支持写回和写分配
- **Bypass 区域**：配置为 IO 地址空间时绕过缓存直接传至 AXI
- 二级接口：AXI4 读写分离（每个通道独立 ID）
- 当前使用 **DTCM 模式**：直接 SRAM 访问（非 Cache 模式）

### 存储层次

```
CPU Core
   ├── ICache (ITCM 模式) ───→ AXI4 Read ───→ 外部内存
   │        └── 16KB SRAM (2 个 32-bit bank)
   └── LSU ───→ DTCM ───→ 32KB SRAM
                  └── 同时连接 AXI4（Addr 在 bypass 区域时使用）
```

---

## 分支预测器 — `Predictor.scala`

### Gshare 预测器

- 5 位全局分支历史寄存器（GBR）
- 32 项模式历史表（PHT），2-bit 饱和计数器（初始为 01，"weakly taken"）
- 预测索引 = `PC[6:2] ^ GBR`（异或折叠）
- 训练在执行阶段进行，更新 PHT 和 GBR

### BTB (Branch Target Buffer)

- 4 项，记录：有效位、源 PC、目标 PC、call/ret/jmp 类型标志
- Miss 时轮转分配（Counter）
- 提供目标 PC 用于取指阶段

### RAS (Return Address Stack)

- 4 项，用于函数调用/返回预测
- 双指针系统：推测指针（预测用）和真实指针（训练用）
- 预测错误时回滚至真实指针

### 预测输出

```
predict_taken = predict_valid && BTB命中 && (PHT预测跳转 || BTB.jmp || BTB.call || BTB.ret)
target_pc = RAS.ret命中 ? RAS.ret_addr |
            (BTB命中且跳转) ? BTB.target_pc |
            PC+4
```

---

## 性能计数器

Tulip 在顶层集成了大量性能计数器：
- 周期计数、指令计数
- 流水线各阶段 valid/ready/fire 统计
- 流水线停顿统计（各执行单元写回停顿）
- 分支预测/刷新统计
- 发射槽 1 因 BJU 停顿计数

---

## 异常与中断处理

### 异常类型

| 类型 | mcause 编码 | 同步/异步 |
|------|------------|----------|
| ECALL | 11 | 同步 |
| EBREAK | 3 | 同步 |
| Timer 中断 | 0x80000007 | 异步 |

### 流程

1. BJU 中的 Clint 模块检测异常/中断条件
2. 更新 CSR 寄存器（mepc, mcause, mstatus）
3. 产生 `interrupt_valid` + `interrupt_pc`（mtvec/mepc）
4. Fetch 重定向到中断向量
5. 全局刷新（`change_flow`）清空流水线

### MRET

从 M 模式异常返回：
- 恢复 mstatus.MIE = mstatus.MPIE
- PC ← mepc

---

## 设计特点与注意事项

1. **顺序双发射**：指令按程序顺序发射，但不同执行单元的写回时间可能不同
2. **Slot 0 独占 BJU**: 分支指令始终占据槽 0，保证了分支预测错误的快速恢复
3. **Slot 1 的依赖处理**：当槽 1 依赖槽 0 结果时，Dispatch 检测到 `rs1/2_addr == rd_addr(0)` 则暂停
4. **BUF 暂存器**：为 ALU/BJU 的执行结果提供额外的流水级缓冲，缓解写回冲突
5. **ROB 驱动退休**：所有指令必须按序退休，ROB 满时 Dispatch 暂停
6. **M 模式实现**：仅实现 Machine 模式，不支持 OS 需要的 S/U 模式
7. **DTCM 直连**：当前配置跳过真实 DCache 使用 DTCM SRAM，属于简化实现

---

## 代码文件索引

| 文件 | 功能 |
|------|------|
| Tulip.scala | 顶层模块，实例化所有子模块并连接 |
| Config.scala | 配置参数（Cache/CPU/BPU）和工具函数 |
| Interfaces.scala | 所有接口 Bundle 定义和控制枚举 |
| Fetch.scala | 取指阶段 |
| Decode.scala | 译码阶段 |
| Issue.scala | 发射阶段 |
| Dispatch.scala | 调度/分发阶段（含寄存器状态表） |
| Commit.scala | 退休阶段（ROB 管理） |
| Regfile.scala | 架构寄存器文件 |
| BJU.scala | 分支/跳转/CSR 执行单元 |
| ALU.scala | 算术逻辑单元 |
| LSU.scala | 访存单元 |
| DIV.scala | 除法单元 |
| Divider.scala | 除法器 IP 包装 |
| Exception.scala | CSR 寄存器文件和中断控制器 |
| Predictor.scala | 分支预测器（Gshare + BTB + RAS） |
| ICache.scala | 指令缓存 |
| DCache.scala | 数据缓存 |
| FIFO.scala | 通用 FIFO 队列 |
| Sram.scala | SRAM 包装器 |
