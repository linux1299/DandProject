# DandProject / DandRiscvSoC

DandProject 是一个以 SpinalHDL 为主要 RTL 生成语言的 RISC-V 处理器与 SoC 实验仓库，包含
多种 RV64 CPU 微架构、AXI 外设/互联、FPGA 顶层、软件栈和仿真验证环境。当前文档重点维护
Tulip 顺序双发射核及其 DCache。

## 当前重点：Tulip

Tulip 是一个 64-bit、顺序双发射、乱序完成/写回、ROB 按序退休的处理器核。当前默认配置包括：

- 16 项 ROB，最多 2 条指令/周期 Dispatch 和 Commit；
- BJU ×1、ALU ×2、共享 MUL/DIV ×1、LSU ×1；
- 双 PC TAGE + 4-entry BTB + 4-entry RAS，并带静态 JAL 预测；
- 默认 1 MiB instruction TCM；
- 16 KiB、2-way、write-back/write-allocate DCache，64 B cache line、1 个 MSHR；
- 32-bit 地址、64-bit AXI 数据接口和 M-mode timer/CSR 支持。

详细设计与限制见：

- [Tulip CPU 架构文档](doc/tulip_architecture.md)
- [DCache 架构与验证文档](doc/dcache_architecture.md)
- [DandMaxFreq 架构文档](doc/DandMaxFreq.md)

## 仓库结构

| 路径 | 内容 |
|------|------|
| `hw/spinal/dandriscv/tulip` | Tulip CPU、TAGE、cache 和生成器 |
| `hw/spinal/dandriscv/biophytum` | BiotCore 双发射实现 |
| `hw/spinal/dandriscv/super_scalar_1issue` | DandMaxFreq / SuperScalar 实现 |
| `hw/spinal/dandriscv/plugin*` | 基于 service/plugin 的 CPU 实验实现 |
| `hw/spinal/dandriscv/gencpu` | 简单核和最小核生成入口 |
| `hw/spinal/dandriscv/gensoc` | DandSoC 系列生成入口 |
| `hw/verilog` | AXI、执行单元、UART、testbench 和 file list |
| `hw/gen` | SpinalHDL 生成的 Verilog（通常不纳入版本管理） |
| `dv` | Verilator、NEMU/Difftest 和 benchmark 驱动 |
| `simWorkspace` | 模块级/集成级仿真工作区 |
| `sw` | Abstract Machine、NEMU、Navy Apps 和测试程序 |
| `fpga` | FPGA 顶层、测试平台和 XDC 约束 |
| `doc` | 架构与验证文档 |

## 环境

RTL 生成的版本由仓库构建文件固定：

- Scala 2.13.11；
- SpinalHDL 1.8.1；
- sbt 或 Mill；
- JDK（与所用 sbt/Mill 版本兼容）。

运行仿真还需要 GNU Make、Verilator 和 C/C++ 工具链。`dv` 的完整 CPU Difftest 流程依赖
仓库内/本地配置的 NEMU、XiangShan Difftest、RISC-V 软件镜像；根目录传统仿真目标还依赖
VCS、Verdi 和 FSDB/coverage 环境。

从仓库根目录加载软件与验证环境变量：

```bash
source ./env.sh
```

`env.sh` 根据当前工作目录设置 `DAND_HOME`、`NEMU_HOME`、`AM_HOME` 和 `NAVY_HOME`，因此应在
仓库根目录执行。

## 生成 Tulip RTL

使用 sbt：

```bash
sbt "runMain dandriscv.tulip.GenTulip"
```

或使用 Mill：

```bash
mill DandRiscvSoC.runMain dandriscv.tulip.GenTulip
```

生成结果为 `hw/gen/Tulip.v`。Tulip 的除法器还引用
`hw/verilog/exu/div_gen_0.v`，仿真或综合文件列表必须同时包含它。

## 验证

### Tulip CoreMark + Difftest

先生成 `hw/gen/Tulip.v` 并准备 CoreMark 镜像，然后执行：

```bash
source ./env.sh
make -C dv tulip
```

带波形运行：

```bash
make -C dv tulipw
```

对应入口是 `dv/projects/dand_riscv_tulip/vsrc/SimTop.v`。`dv/Makefile` 还提供 `coremark`、
`dhrystone`、`microbench`、`biot` 等目标。

### DCache 与 LSU-DCache 回归

先生成模块 RTL：

```bash
sbt "runMain dandriscv.tulip.GenDCacheTop"
sbt "runMain dandriscv.tulip.GenLSUDCacheTop"
```

再运行 Verilator 回归：

```bash
make -C simWorkspace/DCache all
make -C simWorkspace/DCache test-lsu
```

覆盖范围和已知限制记录在 [DCache 架构与验证文档](doc/dcache_architecture.md)。

### 传统 VCS testbench

根目录 `Makefile` 的主要目标为：

| 目标 | testbench |
|------|-----------|
| `make all` | `tb_DandRiscvSimple` |
| `make all2` | `tb_DandRiscvSmallest` |
| `make all3` | `tb_DandRiscvYsyx3rd` |
| `make all4` | `tb_SuperScalar` |
| `make soc` / `make soc2` | DandSoC testbench |

这些目标会调用 VCS、FSDB 和 coverage 工具；Tulip 的日常验证入口优先使用 `dv` 中的
Verilator/Difftest 流程。

## 软件与 FPGA

`sw` 下集成了 Abstract Machine、NEMU、am-kernels 和 Navy Apps，用于生成 CPU 测试、
benchmark 与应用镜像。`fpga` 下包含 DandSoC 顶层、USB/AXI、LCD 相关模块以及板级 XDC
约束。二者都带有本机工具链和路径假设，移植到新环境时应先检查 `env.sh`、各级 Makefile
及 testbench 中的绝对路径。

## 当前实现边界

Tulip 仍是实验性内核：地址接口为 32 bit，默认指令侧依赖预加载 ITCM；未覆盖浮点、原子、
压缩、虚拟内存和完整特权架构；非对齐访存、DCache 多 MSHR、dirty flush writeback 与 AXI
错误上报尚未实现。使用前请以 [Tulip CPU 架构文档](doc/tulip_architecture.md) 的“已知限制”
为准。
