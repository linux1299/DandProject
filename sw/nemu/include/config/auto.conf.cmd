deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/lin/DandProject/sw/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
