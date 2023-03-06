#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/device.h>
#include<linux/err.h>
#include<linux/kobject.h>
#include<linux/sysfs.h>

int num = 0;
dev_t dev=MKDEV(220,1);
static struct cdev c_dev;
static struct class *class_dev;
struct kobject *kobj;

static int my_open(struct inode *inode,struct file *file);
static int my_close(struct inode *inode,struct file *file);
static ssize_t my_read(struct file *file,char __user *buf,size_t len,loff_t *off);
static ssize_t my_write(struct file *file,const char __user *buf,size_t len,    loff_t *off);
static ssize_t sysfs_show(struct kobject *kobj,struct kobj_attribute *attr,char *buf);
static ssize_t sysfs_store(struct kobject *kobj,struct kobj_attribute *attr,const char *buf,size_t count);


struct kobj_attribute my_attr = __ATTR(num,0660,sysfs_show,sysfs_store);
static struct file_operations fops = {
.owner = THIS_MODULE,
.open = my_open,
.read  = my_read,
.write = my_write,
.release = my_close,
};


static int my_open(struct inode *inode,struct file *file)
{
	pr_info("Device File opened\n");
	return 0;
}
static int my_close(struct inode *inode,struct file *file)
{
	pr_info("Device File closed\n");
	return 0;
}
static ssize_t my_read(struct file *file,char __user *buf,size_t len,loff_t *off)
{
	pr_info("Device File read function called\n");
	return 0;
}
static ssize_t my_write(struct file *file,const char __user *buf,size_t len,loff_t *off)
{
	pr_info("Device File write function called\n");
	return len;
}

static ssize_t sysfs_show(struct kobject *kobj,struct kobj_attribute *attr,char *buf)
{
	pr_info("Read Function called sysfs\n");
	return sprintf(buf, "%d",num);
}
static ssize_t sysfs_store(struct kobject *kobj,struct kobj_attribute *attr,const char *buf,size_t count)
{
	pr_info("Write Function called sysfs\n");
	sscanf(buf,"%d",&num);
	return count;
}


static int __init main_init(void)
{
	if((register_chrdev_region(dev,1,"DINESH_A"))<0){
		pr_info("Cannot allocate majot and minor number\n");
		return -1;
	}
	pr_info("Major =%d Minor = %d\n",MAJOR(dev),MINOR(dev));
	cdev_init(&c_dev,&fops);
	if((cdev_add(&c_dev,dev,1)<0))
	{
		pr_info("Cannot be create cdev add\n");
		goto r_class;
	}
	if(IS_ERR(class_dev = class_create(THIS_MODULE,"DINESH_A")))
	{
		pr_info("CLass cannot create\n");
		goto r_class;
	}
	if(IS_ERR(device_create(class_dev,NULL,dev,NULL,"DINESH_A")))
	{
		pr_info("Device cannot create\n");
		goto r_device;
	}
	kobj = kobject_create_and_add("Dinesh_sysfs",kernel_kobj);
	if(sysfs_create_file(kobj,&my_attr.attr))
	{
		pr_info("Cannot Create sysfs file..\n");
		goto r_sysfs;
	}
	pr_info("Module is loaded\n");
	return 0;

r_sysfs:
	kobject_put(kobj);
	sysfs_remove_file(kobj,&my_attr.attr);
r_device:
	class_destroy(class_dev);
r_class:
	unregister_chrdev_region(dev,1);
	cdev_del(&c_dev);
	return -1;
}
static void __exit main_exit(void)
{
	kobject_put(kobj);
	sysfs_remove_file(kobj,&my_attr.attr);
	device_destroy(class_dev,dev);
	class_destroy(class_dev);
	cdev_del(&c_dev);
	unregister_chrdev_region(dev,1);
	pr_info("Device driver is unloaded successfully\n");
}

module_init(main_init);
module_exit(main_exit);

MODULE_AUTHOR("DINESH");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SIMPLE PROGRAM");

