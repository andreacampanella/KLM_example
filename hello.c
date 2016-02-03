#include <linux/module.h> // all kernel modules
#include <linux/kernel.h> // KERN_EMERG, KERN_ALERT, KERN_CRIT, ... 
#include <linux/init.h>   // __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("emuboy85@gmail.com");
MODULE_DESCRIPTION("A Simple Hello World module");

static int __init hello_init(void) {
    printk(KERN_NOTICE "Hello world!\n");
    return 0; // non-0 means init_module failed
}

static void __exit hello_cleanup(void) {
    printk(KERN_NOTICE "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);