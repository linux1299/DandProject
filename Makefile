clean:
	rm -rf  *simv*  *.vpd DVEfiles csrc simv* ucli* *.log *novas*  vpd2fsdb* v* V* *fsdb* verdilog* *bin* *stack.info* novas.conf novas.rc

all: clean com sim
re: com sim

com:
	vcs -sverilog +v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandRiscvSimple.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandRiscvSimple/tb_DandRiscvSimple.simv  \
	-l ./simWorkspace/tb_DandRiscvSimple/compile.log                             \
	-fsdb                                      \
	-top tb_DandRiscvSimple


sim:
	./simWorkspace/tb_DandRiscvSimple/tb_DandRiscvSimple.simv -l ./simWorkspace/tb_DandRiscvSimple/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandRiscvSimple/tb_DandRiscvSimple.simv.vdb/ -report both  


ver:
	verdi  ./simWorkspace/tb_DandRiscvSimple/tb_DandRiscvSimple.fsdb -f ./hw/verilog/tb/tb_DandRiscvSimple.f -ssf -sv -v2k &


all2: clean com2 sim2
re2: com2 sim2
com2:
	vcs -sverilog +v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandRiscvSmallest.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandRiscvSmallest/tb_DandRiscvSmallest.simv  \
	-l ./simWorkspace/tb_DandRiscvSmallest/compile.log                             \
	-fsdb                                      \
	-top tb_DandRiscvSmallest


sim2:
	./simWorkspace/tb_DandRiscvSmallest/tb_DandRiscvSmallest.simv -l ./simWorkspace/tb_DandRiscvSmallest/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandRiscvSmallest/tb_DandRiscvSmallest.simv.vdb/ -report both  


ver2:
	verdi  ./simWorkspace/tb_DandRiscvSmallest/tb_DandRiscvSmallest.fsdb -f ./hw/verilog/tb/tb_DandRiscvSmallest.f -ssf -sv -v2k &

all3: clean com3 sim3
re3: com3 sim3
com3:
	vcs -sverilog +v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandRiscvYsyx3rd.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandRiscvYsyx3rd/tb_DandRiscvYsyx3rd.simv  \
	-l ./simWorkspace/tb_DandRiscvYsyx3rd/compile.log                             \
	-fsdb                                      \
	-top tb_DandRiscvYsyx3rd


sim3:
	./simWorkspace/tb_DandRiscvYsyx3rd/tb_DandRiscvYsyx3rd.simv -l ./simWorkspace/tb_DandRiscvYsyx3rd/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandRiscvYsyx3rd/tb_DandRiscvYsyx3rd.simv.vdb/ -report both  


ver3:
	verdi  ./simWorkspace/tb_DandRiscvYsyx3rd/tb_DandRiscvYsyx3rd.fsdb -f ./hw/verilog/tb/tb_DandRiscvYsyx3rd.f -ssf -sv -v2k &

all4: clean com4 sim4
re4: com4 sim4
com4:
	vcs -sverilog +v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_SuperScalar.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_SuperScalar/tb_SuperScalar.simv  \
	-l ./simWorkspace/tb_SuperScalar/compile.log                             \
	-fsdb                                      \
	-top tb_SuperScalar


sim4:
	./simWorkspace/tb_SuperScalar/tb_SuperScalar.simv -l ./simWorkspace/tb_SuperScalar/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_SuperScalar/tb_SuperScalar.simv.vdb/ -report both  


ver4:
	verdi  ./simWorkspace/tb_SuperScalar/tb_SuperScalar.fsdb -f ./hw/verilog/tb/tb_SuperScalar.f -ssf -sv -v2k &

soc: clean com_soc sim_soc
re_soc: com_soc cp_bin sim_soc rm_bin
com_soc:
	vcs -sverilog +v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandSocSimple.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandSocSimple/tb_DandSocSimple.simv  \
	-l ./simWorkspace/tb_DandSocSimple/compile.log                             \
	-fsdb                                      \
	-top tb_DandSocSimple

cp_bin:
	cp ./hw/gen/*.bin ./
rm_bin:
	rm ./*.bin


sim_soc:
	./simWorkspace/tb_DandSocSimple/tb_DandSocSimple.simv -l ./simWorkspace/tb_DandSocSimple/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandSocSimple/tb_DandSocSimple.simv.vdb/ -report both  


ver_soc:
	verdi  ./simWorkspace/tb_DandSocSimple/tb_DandSocSimple.fsdb -f ./hw/verilog/tb/tb_DandSocSimple.f -ssf -sv -v2k &


soc2: clean com_soc2 sim_soc2
re_soc2: com_soc2 cp_bin2 sim_soc2 rm_bin2
com_soc2:
	vcs -sverilog -sv_lib /home/lin/SpinalProjects/DandRiscvSoC/hw/c/display.so \
	+v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandSoc.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandSoc/tb_DandSoc.simv  \
	-l ./simWorkspace/tb_DandSoc/compile.log                             \
	-fsdb                                      \
	-top tb_DandSoc

cp_bin2:
	cp ./hw/gen/*.bin ./
rm_bin2:
	rm ./*.bin

sim_soc2:
	./simWorkspace/tb_DandSoc/tb_DandSoc.simv -l ./simWorkspace/tb_DandSoc/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandSoc/tb_DandSoc.simv.vdb/ -report both  

ver_soc2:
	verdi  ./simWorkspace/tb_DandSoc/tb_DandSoc.fsdb -f ./hw/verilog/tb/tb_DandSoc.f -ssf -sv -v2k &

v2: clean comv2 simv2
rev2: comv2 simv2
comv2:
	vcs -sverilog  \
	+v2k -timescale=1ns/1ns  -full64 -cpp g++ -cc gcc -LDFLAGS -Wl,--no-as-needed \
	-f ./hw/verilog/tb/tb_DandSocV2.f                       \
	-debug_all                                 \
	-o ./simWorkspace/tb_DandSocV2/tb_DandSocV2.simv  \
	-l ./simWorkspace/tb_DandSocV2/compile.log                             \
	-fsdb                                      \
	-top tb_DandSocV2

simv2:
	./simWorkspace/tb_DandSocV2/tb_DandSocV2.simv -l ./simWorkspace/tb_DandSocV2/sim.log  +nospecify +notimingcheck +fsdb+autoflush \
	-lca -cm line+tgl+cond+fsm \
  urg -dir ./simWorkspace/tb_DandSocV2/tb_DandSocV2.simv.vdb/ -report both  

verv2:
	verdi  ./simWorkspace/tb_DandSocV2/tb_DandSocV2.fsdb -f ./hw/verilog/tb/tb_DandSocV2.f -ssf -sv -v2k &