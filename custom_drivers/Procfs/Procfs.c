#include<linux/modules.h>
#include<linux/init.h>
#include<linux/kdev_t.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/uaccess.h>
#include<linux/proc_fs.h>
#include<linux/err.h>


char kernel_arr[20] = "DINESH";
static int len = 1;
dev_t dev;
static struct class *dev_class;
static struct cdev c_dev;
static struct proc_dir_entry *parent;

static int __init profs_init(void);
static void __exit profs_exit(void);
static int my_open(struct inode *inode,struct file *file);
static int my_close(struct inode *inode,struct file *file);
static ssize_t my_read(struct file *file,char __user *buf,size_t len,loff_t *off);
static ssize_t my_write(struct file *file,const char *buf,size_t len,loff_t *off);


static int open_proc(struct inode *inode,struct file *file);
static int close_proc(struct inode *inode,struct file *file);
static int read_proc(struct file *file,char __user *buf,size_t len,loff_t *off);
static int write_proc(struct file *file,const char *buf,size_t len,loff_t *off);

static struct file_operations fops = {
	.owner = THIS_MODULE,
	.open  = my_read,
	.release = my_close,
	.read  = my_read,
	.write = my_write,
};


static struct proc_ops proc_fops = {
	.proc_open = open_proc,
	.proc_read = read_proc,
	.proc_write = write_proc,
	.proc_release = close_proc,
};


