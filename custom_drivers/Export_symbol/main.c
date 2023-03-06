#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/device.h>
#include<linux/err.h>

dev_t maj_min;

struct class *class_dev;
struct cdev c_dev;


//extern ssize_t my_write(struct file *filp,char __user *buf,size_t len,loff_t lof);
//extern ssize_t my_read(struct file *filp,char __user *buf,size_t len,loff_t lof);
extern int my_open(struct inode *inode,struct file *filp);
extern int my_close(struct inode *inode,struct file *filp);

extern struct file_operations fops; 

int __init main_init(void)
{
	if((alloc_chrdev_region(&maj_min,0,1,"Export_Symbol"))<0)
	{
		pr_info("Your Minor and Major cannot be created\n");
		return -1;
	}
	pr_info("Major = %d Minor = %d\n",MAJOR(maj_min),MINOR(maj_min));
	
	cdev_init(&c_dev,&fops);
	if((cdev_add(&c_dev,maj_min,1))<0)
	{
		pr_info("Cannot be add the device to the system\n");
		unregister_chrdev_region(maj_min,1);
		return 0;
	}
	
	if(IS_ERR(class_dev = class_create(THIS_MODULE,"DINESH")))
	{
		pr_info("Cannot create the struct class\n");
		unregister_chrdev_region(maj_min,1);
		return 0;
	}

	if(IS_ERR(device_create(class_dev,NULL,maj_min,NULL,"DINESH_DEVICE")))
	{
		pr_info("Cannot create the device\n");
		class_destroy(class_dev);
		unregister_chrdev_region(maj_min,1);
		return 0;
	}

	pr_info("Kernel module inserted succesfully\n");
	return 0;
}

void __exit main_exit(void)
{
	device_destroy(class_dev,maj_min);
	class_destroy(class_dev);
	cdev_del(&c_dev);
	unregister_chrdev_region(maj_min,1);
	pr_info("Kernel module Removed successfully\n");
}

module_init(main_init);
module_exit(main_exit);

MODULE_AUTHOR("DINESH");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SIMPLE EXPORT SYMBOL PROGRAM");
