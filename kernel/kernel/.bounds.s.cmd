cmd_kernel/bounds.s := arm-eabi-gcc -Wp,-MD,kernel/.bounds.s.d  -nostdinc -isystem /local/build/sourcecode/vL3V/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/local/build/sourcecode/vL3V/kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -Imediatek/custom/jrdhz75_gb2_sensors/common -I../mediatek/platform/mt6575/kernel/core/include/ -I../mediatek/source/kernel/include/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/alsps/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/leds/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/battery/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/accelerometer/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/kpd/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/rtc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/headset/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/core/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/dct/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/camera/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/touchpanel/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/usb/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/alsps/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/leds/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/magnetometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/accelerometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lcm/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lcm/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/barometer/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lens/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/lens/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/./ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/jogball/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/sound/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/sound/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/imgsensor/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/imgsensor/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/eeprom/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/eeprom/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/hdmi/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/gyroscope/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/flashlight/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/kernel/flashlight/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/sensors/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/audioflinger/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/camera/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/bluetooth/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/inc/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/fmradio/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/lens/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/imgsensor/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/eeprom/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/ant/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/combo/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/flashlight/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/vt/ -I../mediatek/custom/out/jrdhz75_gb2_sensors/hal/matv/ -D__KERNEL__ -mlittle-endian -DMODEM_3G -I../mediatek/platform/mt6575/kernel/core/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -DMTK_WAPI_SUPPORT -DMTK_SENSOR_SUPPORT -DCUSTOM_KERNEL_ALSPS -DCUSTOM_KERNEL_ACCELEROMETER -DMTK_BT_SUPPORT -DMTK_FM_SUPPORT -DMTK_CAMERA_APP_3DHW_SUPPORT -DMTK_M4U_SUPPORT -DMTK_WLAN_SUPPORT -DMTK_BT_21_SUPPORT -DMTK_BT_30_SUPPORT -DMTK_BT_40_SUPPORT -DMTK_BT_PROFILE_OPP -DMTK_BT_PROFILE_SIMAP -DMTK_BT_PROFILE_PRXM -DMTK_BT_PROFILE_PRXR -DMTK_BT_PROFILE_HIDH -DMTK_BT_PROFILE_FTP -DMTK_BT_PROFILE_PBAP -DMTK_BT_PROFILE_MANAGER -DMTK_BT_PROFILE_BPP -DMTK_BT_PROFILE_BIP -DMTK_BT_PROFILE_DUN -DMTK_BT_PROFILE_PAN -DMTK_BT_PROFILE_HFP -DMTK_BT_PROFILE_A2DP -DMTK_BT_PROFILE_AVRCP -DMTK_BT_PROFILE_AVRCP14 -DMTK_BT_PROFILE_MAPS -DMTK_BT_PROFILE_MAPC -DMTK_BT_PROFILE_SPP -DMTK_WIFI_HOTSPOT_SUPPORT -DMTK_FM_SUPPORT -DHAVE_XLOG_FEATURE -DMTK_AUTO_DETECT_ACCELEROMETER -DMTK_MAV_SUPPORT -DMTK_HDR_SUPPORT -DMTK_CAMERA_BSP_SUPPORT -DMTK_AUTORAMA_SUPPORT -DMTK_IPV6_SUPPORT -DMTK_FM_RECORDING_SUPPORT -DMTK_USES_HD_VIDEO -DMTK_COMBO_QUICK_SLEEP_SUPPORT -DMTK_COMBO_CORE_DUMP_SUPPORT -DMTK_PRODUCT_INFO_SUPPORT -DMT6575 -DMT6628_FM -DMTK_MT6628 -DHI253_YUV -DGC0328_YUV -DSP0718_YUV -DDUMMY -DDUMMY_LENS -DFM_ANALOG_INPUT -DMTK_GPS_MT6628 -DMT6628 -DMODEM_3G -DNT35510_6575_DSI -DILI9488_6575_DSI -DDUMMY_FLASHLIGHT -DMT6628 -DLCM_WIDTH=\"320\" -DLCM_HEIGHT=\"480\" -DMTK_LCM_PHYSICAL_ROTATION=\"0\" -DMTK_SHARE_MODEM_SUPPORT=\"2\" -DMTK_SHARE_MODEM_CURRENT=\"2\" -DUSER_BUILD_KERNEL -Wframe-larger-than=1024 -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bounds)"  -D"KBUILD_MODNAME=KBUILD_STR(bounds)"  -fverbose-asm -S -o kernel/bounds.s kernel/bounds.c

deps_kernel/bounds.s := \
  kernel/bounds.c \
  include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/s390.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /local/build/sourcecode/vL3V/kernel/arch/arm/include/asm/posix_types.h \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/arch/populates/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/cgroup/mem/res/ctlr.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  include/linux/kbuild.h \

kernel/bounds.s: $(deps_kernel/bounds.s)

$(deps_kernel/bounds.s):
