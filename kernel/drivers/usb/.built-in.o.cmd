cmd_drivers/usb/built-in.o :=  arm-eabi-ld.bfd -EL    -r -o drivers/usb/built-in.o drivers/usb/core/built-in.o drivers/usb/storage/built-in.o drivers/usb/misc/built-in.o drivers/usb/early/built-in.o 
