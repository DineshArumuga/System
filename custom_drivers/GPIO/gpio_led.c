#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/kdev_t.h>
#include<linux/device.h>
#include<linux/delay.h>
#include<linux/uaccess.h>
#include<linux/gpio.h>



dev_t dev;
struct class *class_dev;
struct cdev c_dev;

int __init my_led_init(void);
void __exit my_led_exit(void);
int my_open(struct inode *inode,struct file *filp);
int my_close(struct inode *inode,struct file *filp);
ssize_t my_read(struct file *filp,char __user *buf,size_t len,loff_t *off);
ssize_t my_write(struct file *filp,const char *buf,size_t len,loff_t *off);


struct file_operations fops = {
	.owner = THIS_MODULE, 
	.open = my_open,
	.write = my_write, 
	.read = my_read, 
	.release = my_close, 
};

 
int my_open(struct inode *inode,struct file *filp)
{
	pr_info("File is opened\n");
	return 0;
}
int my_close(struct inode *inode,struct file *filp)
{
	pr_info("File is closed\n");
	return 0;
}
ssize_t my_read(struct file *filp,char __user *buf,size_t len,loff_t *off)
{
	uint8_t  value = 0;
	value = gpio_get_value(21);
	len = 1;
	if(copy_to_user(buf,&value,len)>0)
	{
		pr_err("Not copy to user\n");
	}
	pr_info("Read Function %d GPIO Value \n",value);
	return 0;

}
ssize_t my_write(struct file *filp,const char *buf,size_t len,loff_t *off)
{
	uint8_t buff[10] = { 0 };
	if(copy_from_user(buff,buf,len)>0)
	{
		pr_err("Not copy from user\n");
	}
	pr_info("Write function %d GPIO Value\n",buff[0]);
	if(buff[0] == '1')
	{
		gpio_set_value(21,1);
	}
	else if(buff[0] == '0')
	{
		gpio_set_value(21,0);
	}
	else
		pr_err("please give the value is 1 or 0\n");
	return len;
}



int __init my_led_init(void)
{
	if((alloc_chrdev_region(&dev,0,1,"Dinesh_dev"))>0){
		pr_err("Cannot allocate major number\n");
	}
	pr_info("Major = %d Minor = %d \n",MAJOR(dev),MINOR(dev));
	cdev_init(&c_dev,&fops);
	if((cdev_add(&c_dev,dev,1))>0)
		pr_err("Cannot add the device to the system\n");
	if(IS_ERR(class_dev = class_create(THIS_MODULE,"DINESH_class")))
		pr_err("Cannot create class to the system\n");
	if(IS_ERR(device_create(class_dev,NULL,dev,NULL,"DINESH_dev")))
		pr_err("Cannot create device to the system\n");
	if(gpio_is_valid(21) == false)
		pr_err("GPIO %d is not valid\n",21);
	if(gpio_request(21,"GPIO_21_DIN"))
		pr_err("Error : GPIO %d is request\n",21);
	
	gpio_direction_output(21,0);
//	gpio_export(21,false);
	pr_info("Device Driver Inserted successfully\n");
	return 0;
}

void my_led_exit(void)
{
	/*
//	gpio_unexport(21);
	gpio_free(21);
	device_destroy(class_dev,dev);
	class_destroy(class_dev);
	cdev_del(&c_dev);
	unregister_chrdev_region(dev,1);
	*/
	pr_info("Device Driver Removed successfully\n");
}

module_init(my_led_init);
module_exit(my_led_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DINESH A");
MODULE_DESCRIPTION("A SIMPLE LED DEVICE DRIVER");
