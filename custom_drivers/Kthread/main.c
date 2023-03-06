#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/init.h>
#include<linux/types.h>
#include<linux/cdev.h>
#include<linux/device.h>
#include<linux/kthread.h>
#include<linux/err.h>
#include<linux/types.h>
#include <linux/delay.h>

int count =0; 
dev_t dev;
struct cdev c_dev;
struct class *class_dev;
struct task_struct *my_thread;

static int __init main_function(void);
static void __exit exit_function(void);

int my_open(struct inode *inode,struct file *filp)
{
	pr_info("File Opened Successfully\n");
	return 0;
}
int my_close(struct inode *inode,struct file *filp)
{
	pr_info("File Close successfully\n");
	return 0;
}
ssize_t my_read(struct file *filp,char __user *buf,size_t len,loff_t *off)
{
	pr_info("Read Function Operated\n");
	return len;
}
ssize_t my_write(struct file *filp,const char __user *buf,size_t len,loff_t *off)
{
	pr_info("Write Function Operated\n");
	return len;
}



struct file_operations fops = {
	.owner		=	THIS_MODULE,
	.open		=	my_open,
	.release	=	my_close,
	.read		=	my_read,
	.write		=	my_write,
};

int my_function1(void *p)
{
	while(!(kthread_should_stop()))
	{
		count = count+1;
		pr_info("%s Function 1 = %d\n",(char *)p,count);
		msleep(2000);
	}
	return 0;
}

int my_function2(void *p)
{
	while(!(kthread_should_stop()))
	{
		count = count+1;
		pr_info("%s Function 2 = %d\n",(char *)p,count);
		msleep(2000);
	}
	return 0;
}



static int __init main_function(void)
{
	pr_info("Welcome to Main Function\n");
	if((alloc_chrdev_region(&dev,0,1,"Dinesh"))<0)
	{
		pr_err("Cannot be allocate Major and Minor\n");
		return -1;
	}
	pr_info("Major = %d and Minor = %d\n",MAJOR(dev),MINOR(dev));
	cdev_init(&c_dev,&fops);
	if((cdev_add(&c_dev,dev,1))<0)
	{
		pr_err("Cannot add the device to the system\n");
		unregister_chrdev_region(dev,1);
	}
	if(IS_ERR(class_dev = class_create(THIS_MODULE,"Dinesh_class")))
	{
		pr_err("Cannot Create a class\n");
		unregister_chrdev_region(dev,1);
	}
	if(IS_ERR(device_create(class_dev,NULL,dev,NULL,"Dinesh_device")))
	{
		pr_err("Cannot Create a device\n");
		class_destroy(class_dev);
		unregister_chrdev_region(dev,1);
	}
	my_thread = kthread_create(my_function1,NULL,"MY_THREAD");
	if(my_thread)
	{
		wake_up_process(my_thread);
		pr_info("Kthread Created Successsfully\n");
	}
	else
		pr_err("Cannot create thread\n");
	
	my_thread = kthread_run(my_function2,NULL,"MY_THREAD1");
	if(my_thread)
		pr_info("Kthread 2 Created Successfully\n");
	else
		pr_err("Kthread Cannot be create\n");
	pr_info("Inserted Module Successfully\n");
	return 0;
}
static void __exit exit_function(void)
{
	kthread_stop(my_thread);
	device_destroy(class_dev,dev);
	class_destroy(class_dev);
	cdev_del(&c_dev);
	unregister_chrdev_region(dev,1);
}

module_init(main_function);
module_exit(exit_function);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DINESH");
MODULE_DESCRIPTION("SIMPLE KTHREAD PROGRAM");

