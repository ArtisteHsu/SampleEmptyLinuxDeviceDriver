#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int sampleModule_init(void) {
	printk(KERN_INFO "Sample Module init\n");
	return 0;
}

static void sampleModule_exit(void) {
	printk(KERN_INFO "Sample Module exit\n");
}

module_init(sampleModule_init)
module_exit(sampleModule_exit)
