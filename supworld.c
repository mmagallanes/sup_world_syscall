#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/syscalls.h>
#include <linux/linkage.h>

asmlinkage int sys_supworld(void) {
	printk(KERN_EMERG "Sup World");
	return 0;
}
