/*
#include"header.h"

dev_t dev;
struct class *class_device;
struct cdev *cdev;


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
	return abcd;
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
	if((alloc_chrdev_region(&dev,0,1,"Create_device"))<0)
	{
		printk(KERN_INFO"Cannot be allocate the memory\n");
		return -1;
	}
	pr_info("MAJOR = %d MINOR = %d \n",MAJOR(dev),MINOR(dev));
	cdev_init(cdev,&fops);
	if((cdev_add(cdev,dev,1))<0)
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
	cdev_del(cdev);
	unregister_chrdev_region(dev,1);
	pr_info("Kernel Module Removed successfully\n");
}

module_init(create_device_init);
module_exit(create_device_exit);

MODULE_AUTHOR("DINESH");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SIMPLE CHAR DEVICE DRIVER");

*/



#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/err.h>
#include <linux/cdev.h>
#include <linux/device.h>
dev_t dev ;
static struct class *dev_class;
static struct cdev etx_cdev;
/*
** Function Prototypes
*/
static int      __init etx_driver_init(void);
static void     __exit etx_driver_exit(void);
static int      etx_open(struct inode *inode, struct file *file);
static int      etx_release(struct inode *inode, struct file *file);
static ssize_t  etx_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  etx_write(struct file *filp, const char *buf, size_t len, loff_t * off);
static struct file_operations fops =
{
    .owner      = THIS_MODULE,
    .read       = etx_read,
    .write      = etx_write,
    .open       = etx_open,
    .release    = etx_release,
};
/*
** This function will be called when we open the Device file
*/
static int etx_open(struct inode *inode, struct file *file)
{
        pr_info("Driver Open Function Called...!!!\n");
        return 0;
}
/*
** This function will be called when we close the Device file
*/
static int etx_release(struct inode *inode, struct file *file)
{
        pr_info("Driver Release Function Called...!!!\n");
        return 0;
}
/*
** This function will be called when we read the Device file
*/
static ssize_t etx_read(struct file *filp, char __user *buf, size_t len, loff_t *off)
{
        pr_info("Driver Read Function Called...!!!\n");
        return 0;
}
/*
** This function will be called when we write the Device file
*/
static ssize_t etx_write(struct file *filp, const char __user *buf, size_t len, loff_t *off)
{
        pr_info("Driver Write Function Called...!!!\n");
        return len;
}
/*
** Module Init function
*/
static int __init etx_driver_init(void)
{
        /*Allocating Major number*/
        if((alloc_chrdev_region(&dev, 0, 1, "etx_Dev")) <0){
                pr_err("Cannot allocate major number\n");
                return -1;
        }
        pr_info("Major = %d Minor = %d \n",MAJOR(dev), MINOR(dev));
        /*Creating cdev structure*/
        cdev_init(&etx_cdev,&fops);
        /*Adding character device to the system*/
        if((cdev_add(&etx_cdev,dev,1)) < 0){
            pr_err("Cannot add the device to the system\n");
            goto r_class;
        }
        /*Creating struct class*/
        if(IS_ERR(dev_class = class_create(THIS_MODULE,"etx_class"))){
            pr_err("Cannot create the struct class\n");
            goto r_class;
        }
        /*Creating device*/
        if(IS_ERR(device_create(dev_class,NULL,dev,NULL,"etx_device"))){
            pr_err("Cannot create the Device 1\n");
            goto r_device;
        }
        pr_info("Device Driver Insert...Done!!!\n");
      return 0;
r_device:
        class_destroy(dev_class);
r_class:
        unregister_chrdev_region(dev,1);
        return -1;
}
/*
** Module exit function
*/
static void __exit etx_driver_exit(void)
{
        device_destroy(dev_class,dev);
        class_destroy(dev_class);
        cdev_del(&etx_cdev);
        unregister_chrdev_region(dev, 1);
        pr_info("Device Driver Remove...Done!!!\n");
}
module_init(etx_driver_init);
module_exit(etx_driver_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("EmbeTronicX <embetronicx@gmail.com>");
MODULE_DESCRIPTION("Simple Linux device driver (File Operations)");
MODULE_VERSION("1.3");

 
