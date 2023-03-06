#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/kdev_t.h>
#include<linux/slab.h>
#include<linux/uaccess.h>
#define MEM_size 512

MODULE_AUTHOR("DINESH_A");
MODULE_DESCRIPTION("SIMPLE REAL DEVICE DRIVER PROGRAM");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.0.0");


dev_t dev;
struct cdev real_cdev;
struct class *real_class;
uint8_t *Kernel_buf;
uint8_t *kernel_buf;


static int my_open(struct inode *inode,struct file *file)
{
	if((Kernel_buf=kmalloc(MEM_size,GFP_KERNEL))==0)
	{
		pr_err("Memory cannot be allocate \n");
		return 0;
	}
	return 0;
}

static int my_release(struct inode *inode,struct file *file)
{
	kfree(Kernel_buf);
	return 0;
}

static ssize_t my_write(struct file *file,const char *buf,size_t len,loff_t *off)
{
	if(copy_from_user(kernel_buf,buf,len)>0)
	{
		pr_err("Cannot be copied to kernel\n");
	}
	pr_info("Write function successfully");
	return 0;
}

static ssize_t my_read(struct file *file,char *buf,size_t len,loff_t *off)
{
	if(copy_to_user(buf,kernel_buf,len)>0)
	{
		pr_err("Cannot be copied to user\n");
		return 0;
	}
	pr_info("Read function successfully = %s \n",buf);
	return 0;
}


struct file_operations fops=
{
	.owner = THIS_MODULE,
	.open = my_open,
	.release = my_release,
	.write = my_write,
	.read = my_read,
};


static int init_function(void)
{
	if((alloc_chrdev_region(&dev,0,1,"real_device_Maj&Min"))<0)
	{
		printk(KERN_ERR"Cannot allocate the major and minor number\n");
		return 0;
	}
	printk(KERN_INFO"MAJOR NUMBER = %d MINOR NUMBER = %d",MAJOR(dev),MINOR(dev));
	cdev_init(&real_cdev,&fops);
	if((cdev_add(&real_cdev,dev,1))<0)
	{
		pr_err("Cannot struct cdev\n");
		goto r_mm;
	}
	if(IS_ERR(real_class=(class_create(THIS_MODULE,"real_class"))))
	{
		pr_err("Cannot be create a class");
		goto r_cdev;
	}
	if(IS_ERR(device_create(real_class,NULL,dev,NULL,"real_device")))
	{
		pr_err("Cannot be create a device");
		goto r_class;
	}
	printk(KERN_INFO"Device Inserted Successfully");
	return 0;

//r_device:
//	device_destroy(real_class,dev);
r_class:
	class_destroy(real_class);
r_cdev:
	cdev_del(&real_cdev);
r_mm:
	unregister_chrdev_region(dev,1);
	return 0;
}
module_init(init_function);


static void exit_function(void)
{
         device_destroy(real_class,dev);
         class_destroy(real_class);
         cdev_del(&real_cdev);
         unregister_chrdev_region(dev,1);
	 pr_info("Device removed successfully\n");
}
module_exit(exit_function);



