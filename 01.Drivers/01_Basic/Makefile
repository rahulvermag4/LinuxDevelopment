#Author: RAHUL VERMA
#Email:	 rahulvermag4@gmail.com

MODULE_NAME:=hello
SHELL=/bin/bash
obj-m:= $(MODULE_NAME).o
CONFIG_MODULE_SIG=n
PWD=$(shell pwd)

default:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean









