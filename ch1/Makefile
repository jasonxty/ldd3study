ifneq ($(KERNELRELEASE),)
	obj-m := helloworld.o
else
	
	KERNELDIR ?= /home/tianyxu/kernel/linux-5.10.88
    PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
