#include"header.h"

dev_t dev = 0;

static int __init hello_world_init(void)
{
	if((alloc_chrdev_region(&dev,0,1,"MY_MODULE"))>0)
	{
		pr_err("Cannot be allocation device");
		return -1;
	}
	printk(KERN_INFO"Major = %d Minor = %d\n",MAJOR(dev),MINOR(dev));
	printk(KERN_INFO"Kernel Module Inserted successfully\n");
	return 0;
}

static void __exit hello_world_exit(void)
{
	unregister_chrdev_region(dev,1);
	printk(KERN_INFO "Kernel removed succuessfully\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DINESH_A");
MODULE_DESCRIPTION("SIMPLE ALLOCATING MEMORY");

