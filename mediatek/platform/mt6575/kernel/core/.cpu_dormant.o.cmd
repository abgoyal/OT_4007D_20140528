cmd_../mediatek/platform/mt6575/kernel/core/cpu_dormant.o := arm-eabi-gcc -Wp,-MD,../mediatek/platform/mt6575/kernel/core/.cpu_dormant.o.d  -nostdinc -isystem /local/build/sourcecode/vL3V/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/local/build/sourcecode/vL3V/kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -I..//mediatek/custom/jrdhz75_gb2_sensors/common -I../mediatek/platform/mt6575/kernel/core/include/ -I../mediatek/source/kernel/include/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/alsps/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/leds/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/battery/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/accelerometer/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/kpd/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/rtc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/headset/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/core/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/dct/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/camera/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/touchpanel/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/usb/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/alsps/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/leds/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/magnetometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/accelerometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lcm/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lcm/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/barometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lens/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lens/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/./ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/jogball/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/sound/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/sound/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/imgsensor/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/imgsensor/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/eeprom/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/eeprom/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/hdmi/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/gyroscope/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/flashlight/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/flashlight/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/sensors/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/audioflinger/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/camera/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/bluetooth/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/fmradio/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/lens/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/imgsensor/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/eeprom/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/ant/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/combo/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/flashlight/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/vt/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/matv/ -D__KERNEL__   -mlittle-endian -DMODEM_3G -I../mediatek/platform/mt6575/kernel/core/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -Wa,-mfpu=neon -gdwarf-2       -c -o ../mediatek/platform/mt6575/kernel/core/cpu_dormant.o ../mediatek/platform/mt6575/kernel/core/cpu_dormant.S

deps_../mediatek/platform/mt6575/kernel/core/cpu_dormant.o := \
  ../mediatek/platform/mt6575/kernel/core/cpu_dormant.S \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/discontigmem.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/const.h \
  ../mediatek/platform/mt6575/kernel/core/include/mach/memory.h \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  ../mediatek/platform/mt6575/kernel/core/include/mach/mt6575_reg_base.h \
    $(wildcard include/config/base.h) \

../mediatek/platform/mt6575/kernel/core/cpu_dormant.o: $(deps_../mediatek/platform/mt6575/kernel/core/cpu_dormant.o)

$(deps_../mediatek/platform/mt6575/kernel/core/cpu_dormant.o):
