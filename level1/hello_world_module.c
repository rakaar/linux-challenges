#include <linux/module.h> // included for all kernel modules
#include <linux/kernel.h> // included for KERN_INFO
#include <linux/init.h>   // for the __init  and __exit macors

MODULE_LICENSE("GPL");
MODULE_AUTHOR("RKA");
MODULE_DESCRIPTION("Accomplish Task 1");

static int __init hello_init(void) {
    printk(KERN_DEBUG "Hello \n"); // since the challenge asks to print in the debug level
    return 0;
    // Non zero return implies module couldn't load

}

static void __exit hello_cleanup(void) {
    printk(KERN_DEBUG "Clean module\n");
}

module_init(hello_init); // when module loads
module_exit(hello_cleanup); // when module unloadss

