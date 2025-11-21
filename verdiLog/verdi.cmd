debImport "./simWorkspace/tb_Tulip/tb_Tulip.fsdb" "-f" \
          "./hw/verilog/tb/tb_Tulip.f" "-sv" "-v2k"
wvCreateWindow
wvSetPosition -win $_nWave2 {("G1" 0)}
wvOpenFile -win $_nWave2 \
           {/home/lin/DandProject/simWorkspace/tb_Tulip/tb_Tulip.fsdb}
verdiSetFont -font "Bitstream Vera Sans" -size "26"
verdiSetFont -monoFont "Courier" -monoFontSize "24"
simSetInteractiveFsdbFile inter.fsdb
simSetSimMode on
srcSetPreference -filterPowerAwareInstruments off -profileTime off
tbvSetPreference -dynamicDumpMDA 1 -dynamicDumpStruct 1 -dynamicDumpSystemCStruct \
           1 -dynamicDumpSystemCPlain 1 -dynamicDumpSystemCFIFO 1
srcSetPreference -tabSize 4
srcDeselectAll -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip" -delim "."
srcHBSelect "tb_Tulip.u_Tulip" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "dcache_r_valid" -line 29 -pos 1 -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip.dispat" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip.dispat" -delim "."
srcHBSelect "tb_Tulip.u_Tulip.dispat" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip.dcache_1" -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip.dispat" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -win $_nTrace1 -range {6678 6730 3 1 13 1}
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
wvScrollUp -win $_nWave2 12
wvSelectSignal -win $_nWave2 {( "G1" 1 )} 
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
schSetPreference -fixFontSize on
schSetPreference -fixFontSize off
schSetPreference -magnifierSize large
schSetPreference -magnifierSize medium
schSetPreference -moduleFontAutoAdjust 0
schSetPreference -moduleFontSize 24
schSetPreference -instFontAutoAdjust 1
srcSetPreference -iconSize large
srcDeselectAll -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip" -delim "."
srcHBSelect "tb_Tulip.u_Tulip" -win $_nTrace1
srcDeselectAll -win $_nTrace1
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 0.000000 13862745.098039
wvZoom -win $_nWave2 0.000000 281885.884346
wvZoom -win $_nWave2 81576.997031 233881.352844
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvSetCursor -win $_nWave2 151751.326198 -snap {("G1" 3)}
wvZoom -win $_nWave2 145336.182671 176527.052924
wvSelectSignal -win $_nWave2 {( "G1" 2 )} 
wvSelectSignal -win $_nWave2 {( "G1" 1 2 )} 
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 149266.187020 164918.250451
wvSelectSignal -win $_nWave2 {( "G1" 23 )} 
wvScrollDown -win $_nWave2 9
wvSelectSignal -win $_nWave2 {( "G1" 22 )} 
wvSelectSignal -win $_nWave2 {( "G1" 23 )} 
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
schSetPreference -instPortFontSize 3 -instPortFontAutoAdjust 0
verdiSetFont -font "Bitstream Vera Sans" -size "24"
verdiSetFont -font "Bitstream Vera Sans" -size "20"
srcSetDisplayAttr {ComputedSignal} -color {ID_ORANGE5}
verdiSetFont -monoFont "Courier" -monoFontSize "18"
srcDeselectAll -win $_nTrace1
verdiSetFont -font "Bitstream Vera Sans" -size "26"
verdiSetFont -monoFont "Fixed" -monoFontSize "20"
verdiSetFont -monoFont "Courier" -monoFontSize "24"
verdiSetFont -monoFont "Clean" -monoFontSize "16"
verdiSetFont -monoFont "Fixed" -monoFontSize "20"
verdiSetFont -font "Bitstream Vera Sans" -size "22"
srcDeselectAll -win $_nTrace1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSelectSignal -win $_nWave2 {( "G1" 2 )} 
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 146498.374786 186373.057806
wvSelectSignal -win $_nWave2 {( "G1" 25 )} 
wvSelectSignal -win $_nWave2 {( "G1" 22 )} 
wvSelectSignal -win $_nWave2 {( "G1" 1 )} 
wvSelectSignal -win $_nWave2 {( "G1" 2 )} 
wvSelectSignal -win $_nWave2 {( "G1" 1 )} 
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvSetCursor -win $_nWave2 153129.676465 -snap {("G1" 22)}
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvSelectSignal -win $_nWave2 {( "G1" 27 )} 
wvSelectSignal -win $_nWave2 {( "G1" 28 )} 
wvSelectSignal -win $_nWave2 {( "G1" 26 )} 
wvSelectSignal -win $_nWave2 {( "G1" 28 )} 
wvSelectSignal -win $_nWave2 {( "G1" 27 )} 
wvSelectSignal -win $_nWave2 {( "G1" 28 )} 
wvSelectSignal -win $_nWave2 {( "G1" 23 )} 
wvSelectSignal -win $_nWave2 {( "G1" 22 )} 
wvSelectSignal -win $_nWave2 {( "G1" 23 )} 
wvSelectSignal -win $_nWave2 {( "G1" 22 )} 
wvSelectSignal -win $_nWave2 {( "G1" 1 )} 
wvSelectGroup -win $_nWave2 {G1}
wvSetPosition -win $_nWave2 {("G1" 0)}
srcHBSelect "tb_Tulip.u_Tulip.fetch_1" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip.fetch_1" -delim "."
srcHBSelect "tb_Tulip.u_Tulip.fetch_1" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -win $_nTrace1 -range {19152 19164 3 1 13 1}
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoom -win $_nWave2 148062.087846 161759.055942
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvSelectSignal -win $_nWave2 {( "G1" 3 )} 
wvSelectSignal -win $_nWave2 {( "G1" 7 )} 
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSelectSignal -win $_nWave2 {( "G1" 4 )} 
wvSelectSignal -win $_nWave2 {( "G1" 7 )} 
wvSelectSignal -win $_nWave2 {( "G1" 6 )} 
wvSelectSignal -win $_nWave2 {( "G1" 12 )} 
wvSetCursor -win $_nWave2 151011.362385 -snap {("G1" 6)}
srcHBSelect "tb_Tulip.u_Tulip.icache_1" -win $_nTrace1
srcHBSelect "tb_Tulip.u_Tulip.decode_1" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip.decode_1" -delim "."
srcHBSelect "tb_Tulip.u_Tulip.decode_1" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "dec_src_1_valid" -line 16663 -pos 1 -win $_nTrace1
srcAction -pos 16662 3 5 -win $_nTrace1 -name "dec_src_1_valid" -ctrlKey off
srcDeselectAll -win $_nTrace1
srcSelect -signal "dec_stream_1_m2sPipe_valid" -line 19343 -pos 1 -win $_nTrace1
srcAction -pos 19342 7 7 -win $_nTrace1 -name "dec_stream_1_m2sPipe_valid" \
          -ctrlKey off
srcDeselectAll -win $_nTrace1
srcSelect -signal "dec_stream_1_rValid" -line 19338 -pos 1 -win $_nTrace1
srcAction -pos 19337 7 5 -win $_nTrace1 -name "dec_stream_1_rValid" -ctrlKey off
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvSelectSignal -win $_nWave2 {( "G1" 13 )} 
wvSelectSignal -win $_nWave2 {( "G1" 15 )} 
wvSelectSignal -win $_nWave2 {( "G1" 17 )} 
wvSelectSignal -win $_nWave2 {( "G1" 16 )} 
wvSelectSignal -win $_nWave2 {( "G1" 19 )} 
wvSelectSignal -win $_nWave2 {( "G1" 24 )} 
wvScrollDown -win $_nWave2 3
wvSelectSignal -win $_nWave2 {( "G1" 38 )} 
wvSelectSignal -win $_nWave2 {( "G1" 38 )} 
wvSetRadix -win $_nWave2 -format Bin
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollUp -win $_nWave2 1
wvSelectSignal -win $_nWave2 {( "G1" 40 )} 
wvSelectSignal -win $_nWave2 {( "G1" 39 )} 
wvSelectSignal -win $_nWave2 {( "G1" 41 )} 
wvSelectSignal -win $_nWave2 {( "G1" 43 )} 
wvSelectSignal -win $_nWave2 {( "G1" 47 )} 
wvSelectSignal -win $_nWave2 {( "G1" 49 )} 
wvSelectSignal -win $_nWave2 {( "G1" 59 )} 
wvSelectSignal -win $_nWave2 {( "G1" 60 )} 
wvSelectSignal -win $_nWave2 {( "G1" 61 )} 
wvSelectSignal -win $_nWave2 {( "G1" 63 )} 
wvSelectSignal -win $_nWave2 {( "G1" 64 )} 
wvSelectSignal -win $_nWave2 {( "G1" 63 )} 
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSetCursor -win $_nWave2 153030.595881 -snap {("G1" 14)}
wvSelectSignal -win $_nWave2 {( "G1" 3 )} 
wvSelectSignal -win $_nWave2 {( "G1" 4 )} 
wvSelectSignal -win $_nWave2 {( "G1" 4 10 )} 
wvCut -win $_nWave2
wvSetPosition -win $_nWave2 {("G1" 12)}
wvSetPosition -win $_nWave2 {("G1" 10)}
wvSelectSignal -win $_nWave2 {( "G1" 3 )} 
wvSelectSignal -win $_nWave2 {( "G1" 5 )} 
wvSelectSignal -win $_nWave2 {( "G1" 8 )} 
wvSelectSignal -win $_nWave2 {( "G1" 10 )} 
wvSetCursor -win $_nWave2 151080.991126 -snap {("G1" 10)}
srcActiveTrace "tb_Tulip.u_Tulip.fetch_1.fch_dst_1_instr\[31:0\]" -win $_nTrace1 \
           -TraceByDConWave -TraceTime 151000 -TraceValue \
           xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
srcHBSelect "tb_Tulip.u_Tulip.icache_1" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb_Tulip.u_Tulip.icache_1" -delim "."
srcHBSelect "tb_Tulip.u_Tulip.icache_1" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -win $_nTrace1 -range {18975 18993 3 1 14 1}
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave2
wvSetCursor -win $_nWave2 147191.728581 -snap {("G1" 13)}
wvSetCursor -win $_nWave2 145043.184565 -snap {("G1" 11)}
wvSelectSignal -win $_nWave2 {( "G1" 13 )} 
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoom -win $_nWave2 133982.161673 170467.622077
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomIn -win $_nWave2
wvZoomOut -win $_nWave2
wvSetMarker -win $_nWave2 149000.000000
wvScrollDown -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvSelectSignal -win $_nWave2 {( "G1" 3 )} 
wvSelectSignal -win $_nWave2 {( "G1" 13 )} 
wvSelectSignal -win $_nWave2 {( "G1" 11 13 )} 
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 99603.160312 179781.085644
wvZoom -win $_nWave2 103504.337507 171192.673163
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 124715.315601 190437.396046
wvZoom -win $_nWave2 142350.979163 158721.838707
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvScrollDown -win $_nWave2 1
wvSetCursor -win $_nWave2 147005.439229 -snap {("G1" 15)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 106833.228336 179164.607760
wvZoom -win $_nWave2 139426.998076 160123.122618
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvSelectSignal -win $_nWave2 {( "G1" 11 13 16 )} 
wvSelectSignal -win $_nWave2 {( "G1" 11 13 16 17 )} 
wvZoom -win $_nWave2 100116.385340 204844.486868
wvZoom -win $_nWave2 134417.310387 165029.555023
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvScrollUp -win $_nWave2 1
wvZoom -win $_nWave2 141842.502622 156603.962636
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 109130.378271 163845.332454
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 102832.396980 170818.807007
