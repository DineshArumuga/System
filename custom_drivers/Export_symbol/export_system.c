
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/device.h>
#include<linux/err.h>



/*

ssize_t my_write(struct file *filp,char __user *buf,size_t len,loff_t lof)
{
	pr_info("Write Function calling\n");
	return len;
}
ssize_t my_read(struct file *filp,char __user *buf,size_t len,loff_t lof)
{
	pr_info("Read Function calling\n");
	return len;
}
*/
int my_open(struct inode *inode,struct file *filp)
{
	pr_info("Open FUnction calling\n");
	return 0;
}	

int my_close(struct inode *inode,struct file *filp)
{
	pr_info("CLose Function calling\n");
	return 0;
}

struct file_operations fops =
{
	.owner = THIS_MODULE,
	.read  = my_read,
	.write = my_write,
       	.open  = my_open,
	.release=my_close,	
};

EXPORT_SYMBOL(my_open);
EXPORT_SYMBOL(my_close);
//EXPORT_SYMBOL(my_write);
//EXPORT_SYMBOL(my_read);
EXPORT_SYMBOL(fops);
int __init main_init(void)
{
	pr_info("Second Main function\n");
	return 0;
}

void __exit main_exit(void)
{
	pr_info("Second Exit function\n");
}
module_init(main_init);
module_exit(main_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DINESH");
MODULE_DESCRIPTION("EXPORT FUNCTION");

