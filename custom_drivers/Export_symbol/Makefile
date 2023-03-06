obj-m += main.o
obj-m += export_system.o

KDIR = /lib/modules/5.4.0-135-generic/build

all:
	make -C $(KDIR) M=$(shell pwd) modules
clean:
	make -C $(KDIR) M=$(shell pwd) clean

