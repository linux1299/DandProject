############## clk rst ######################
# create_clock -period 20.000 -name sys_clk [get_ports sys_clk]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets sys_clk]
set_property PACKAGE_PIN R4 [get_ports sys_clk]
set_property IOSTANDARD LVCMOS15 [get_ports sys_clk]

set_property IOSTANDARD LVCMOS15 [get_ports {sys_rst_n}]
set_property PACKAGE_PIN U7 [get_ports {sys_rst_n}]
create_clock -period 16.000 [get_ports usb_clk_60m]


############## USB ######################
set_property -dict {PACKAGE_PIN C17 IOSTANDARD LVCMOS33} [get_ports {usb_data[0]}]
set_property -dict {PACKAGE_PIN F15 IOSTANDARD LVCMOS33} [get_ports {usb_data[1]}]
set_property -dict {PACKAGE_PIN F18 IOSTANDARD LVCMOS33} [get_ports {usb_data[2]}]
set_property -dict {PACKAGE_PIN E18 IOSTANDARD LVCMOS33} [get_ports {usb_data[3]}]
set_property -dict {PACKAGE_PIN E21 IOSTANDARD LVCMOS33} [get_ports {usb_data[4]}]
set_property -dict {PACKAGE_PIN D21 IOSTANDARD LVCMOS33} [get_ports {usb_data[5]}]
set_property -dict {PACKAGE_PIN F21 IOSTANDARD LVCMOS33} [get_ports {usb_data[6]}]
set_property -dict {PACKAGE_PIN E22 IOSTANDARD LVCMOS33} [get_ports {usb_data[7]}]
set_property -dict {PACKAGE_PIN G21 IOSTANDARD LVCMOS33} [get_ports usb_siwu_n]
set_property -dict {PACKAGE_PIN E19 IOSTANDARD LVCMOS33} [get_ports usb_clk_60m]
set_property -dict {PACKAGE_PIN F19 IOSTANDARD LVCMOS33} [get_ports usb_rd_n]
set_property -dict {PACKAGE_PIN F20 IOSTANDARD LVCMOS33} [get_ports usb_wr_n]
set_property -dict {PACKAGE_PIN F16 IOSTANDARD LVCMOS33} [get_ports usb_rxf_n]
set_property -dict {PACKAGE_PIN E17 IOSTANDARD LVCMOS33} [get_ports usb_txe_n]
set_property -dict {PACKAGE_PIN D19 IOSTANDARD LVCMOS33} [get_ports usb_oe_n]


############## DDR ######################
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]
set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design] 
set_property CONFIG_MODE SPIx4 [current_design] 
set_property BITSTREAM.CONFIG.CONFIGRATE 50 [current_design] 
set_property CLKFBOUT_MULT_F 12 [get_cells u_mig_7series_0/u_mig_7series_0_mig/u_ddr3_infrastructure/gen_mmcm.mmcm_i]
set_property CLKFBOUT_MULT 4 [get_cells u_mig_7series_0/u_mig_7series_0_mig/u_ddr3_infrastructure/plle2_i]