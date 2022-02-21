#include <linux/init.h>
#include <linux/module.h>

static char *whom = "world";
static int howmany = 1;
module_param(howmany, int, S_IRUGO|S_IWUSR);
module_param(whom, charp, S_IRUGO|S_IWUSR);

static int hello_init(void)
{
    int i = 0;
    for(; i < howmany; i++) {
        printk(KERN_ALERT "Hello, %s\n", whom);
    }
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, cruel world\n");
}

/*
 *  Housekeeping and legal stuff
 *  or insmod will get "short read" error
 */
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("tianyxu");
MODULE_DESCRIPTION("hello world");

module_init(hello_init);
module_exit(hello_exit);
