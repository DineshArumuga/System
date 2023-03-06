
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/err.h>
#include <linux/cdev.h>
#include <linux/device.h>

dev_t dev;
struct class *class_device;
struct cdev cdev;


static int __init create_device_init(void);
static void __exit create_device_exit(void);
ssize_t my_read(struct file *ab,char __user *abc ,size_t abcd, loff_t *abcde);
ssize_t my_write(struct file *ab,const char __user *abc,size_t abcd,loff_t *abcde);
int my_open(struct inode *abc,struct file *abcd);
int my_release(struct inode *abc,struct file *abcd);

struct file_operations fops =
{
	.owner   = THIS_MODULE,
	.read    = my_read,
	.write   = my_write,
	.open    = my_open,
	.release = my_release,
};

ssize_t my_read(struct file *ab,char __user *abc ,size_t abcd, loff_t *abcde)
{
	pr_info("Read the Kernel Module device file\n");
	return 0;
}

ssize_t my_write(struct file *ab,const char __user *abc,size_t abcd,loff_t *abcde)
{
	pr_info("Write the kernal Module device file\n");
	return abcd;
}

int my_open(struct inode *abc,struct file *abcd)
{
	pr_info("Open the kernel Module device file\n");
	return 0;
}

int my_release(struct inode *abc,struct file *abcd)
{
	pr_info("Close the kernel Module device file\n");
	return 0;
}

static int __init create_device_init(void)
{
	if((alloc_chrdev_region(&dev,0,5,"DINESH"))<0)
	{
		printk(KERN_INFO"Cannot be allocate the memory\n");
		return -1;
	}
	pr_info("MAJOR = %d MINOR = %d \n",MAJOR(dev),MINOR(dev));
	cdev_init(&cdev,&fops);
	if((cdev_add(&cdev,dev,1))<0)
	{
		printk(KERN_INFO"Cannot be add device\n");
		goto r_class;
	}
	if(IS_ERR(class_device=class_create(THIS_MODULE,"DINESH")))
	{
		printk(KERN_INFO"Cannot be create class\n");
		goto r_class;
	}
	if(IS_ERR(device_create(class_device,NULL,dev,NULL,"DINESH")))
	{
		printk(KERN_INFO"Cannot be device class\n");
		goto r_device;
	}
	pr_info("Kernel Module inserted successfully\n");
	return 0;
r_device:
	class_destroy(class_device);
r_class:
	unregister_chrdev_region(dev,1);
	return -1;
}

void __exit create_device_exit(void)
{
	device_destroy(class_device,dev);
	class_destroy(class_device);
	cdev_del(&cdev);
	unregister_chrdev_region(dev,1);
	pr_info("Kernel Module Removed successfully\n");
}

module_init(create_device_init);
module_exit(create_device_exit);

MODULE_AUTHOR("DINESH");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SIMPLE CHAR DEVICE DRIVER");



 
