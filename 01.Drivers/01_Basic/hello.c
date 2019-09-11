#include <linux/module.h>
#include <linux/init.h>

static int __init myInitFunc(void)
{
	printk(KERN_INFO"%s:	Hello Guys\n",__func__);
	return 0;
}

static void __exit myExitFunc(void)
{
	printk(KERN_INFO"%s:	Hello Guys\n",__func__);
}

module_init(myInitFunc);
module_exit(myExitFunc);
MODULE_AUTHOR("Rahul Verma");
MODULE_LICENSE("GPL");
