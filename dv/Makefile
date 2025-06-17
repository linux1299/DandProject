clean:
	rm -rf  *.log
cputest:
	./build.sh -e dand_riscv_maxfreq -d -b -r  "non-output/cpu-tests"
rvtest:
	./build.sh -e dand_riscv_maxfreq -d -b -r  "non-output/riscv-tests"
cmtest:	
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i non-output/coremark/coremark.bin -b 0" -m "EMU_TRACE=1" -b
dstest:
	./build.sh -e dand_riscv_maxfreq -d -b -r "non-output/dhrystone"
mbtest:
	./build.sh -e dand_riscv_maxfreq -d -b -r "non-output/microbench"

coremark:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i mytests/benchmarks/coremark/coremark-riscv64-nemu.bin -b 0" -m "EMU_TRACE=1" -b
dhrystone:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i mytests/benchmarks/dhrystone/dhrystone-riscv64-nemu.bin -b 0" -m "EMU_TRACE=1" -b
microbench:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i mytests/benchmarks/microbench/microbench-riscv64-nemu.bin -b 0" -m "EMU_TRACE=1" -b

yieldtest:	
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i custom-output/yield-test/amtest-yield-test.bin -b 0" -m "EMU_TRACE=1" -b
inttest:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i custom-output/interrupt-test/amtest-interrupt-test.bin -b 0" -m "EMU_TRACE=1" -b
timetest:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i custom-output/time-test/amtest-time-test.bin -b 0" -m "EMU_TRACE=1" -b
hellotest:
	./build.sh -e dand_riscv_maxfreq -d -s -a "-i custom-output/hello/amtest-hello.bin -b 0" -m "EMU_TRACE=1" -b
simple:
	./build.sh -e dand_riscv_simple -d -s -a "-i custom-output/hello/amtest-hello.bin -b 0" -m "EMU_TRACE=1" -b
