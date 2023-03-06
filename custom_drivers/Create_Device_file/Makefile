#obj-m += Creating_device_file.o
obj-m += Char_device.o
#obj-m += char_device.o
KDIR = /lib/modules/$(shell uname -r)/build
 

all:
	make -C $(KDIR)  M=$(shell pwd) modules
 
clean:
	make -C $(KDIR)  M=$(shell pwd) clean
