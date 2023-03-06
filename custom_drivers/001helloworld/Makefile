#obj := main.o
#KDIR = /lib/modules/$(shell uname -r)/build
#all:
#	make -c $(KDIR) M=$(shell pwd) modules
#clean:
#	make -c $(KDIR) M=$(shell pwd) clean

#obj-m += main.o

#obj-m += First_program.o
obj-m := param_module_cp.o

#KDIR = /lib/module/$(shell uname -r)/build/
 

all:
	make -C /lib/modules/$(shell uname -r)/build  M=$(shell pwd) modules
 
clean:
	make -C /lib/modules/$(shell uname -r)/build  M=$(shell pwd) clean
