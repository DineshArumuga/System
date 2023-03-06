obj-m += allocating_major_minor.o
#obj-m += allocating_dynamic_major_minor.o
#obj-m += Auto_creating_device_file.o
KDIR = /lib/modules/$(shell uname -r)/build
 

all:
	make -C $(KDIR)  M=$(shell pwd) modules
 
clean:
	make -C $(KDIR)  M=$(shell pwd) clean
