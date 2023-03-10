#include<stdio.h>
#include<unistd.h>

int main()
{
	int k;
	char ch;
abc:	printf("Enter the 1)Sum 2)Sub 3)Mul 4)Div \n");
	scanf("%d",&k);
	printf("Enter a.integar b.float c.double \n"); 
	scanf(" %c",&ch);
	if(ch == 'a')
	{
		int i,j;
		printf("Enter the two number \n");
		scanf("%d%d",&i,&j);
		switch(k)
		{
			case 1: printf("Sum = %d \n",i+j);
				break;
			case 2: printf("Sub = %d \n",i-j);
				break;
			case 3: printf("Mul = %d \n",i*j);
				break;
			case 4: printf("Quotient = %d \n Remainder = %d \n",i/j,i%j);
				break;
			default:printf("Invalid Operation\n");
				sleep(2);
				goto abc;
		}
	}
	if(ch == 'b')
	{
		float i,j;	
		printf("Enter the two number \n");
		scanf("%f%f",&i,&j);
		switch(k)
		{
			case 1: printf("Sum = %f \n",i+j);
				break;
			case 2: printf("Sub = %f \n",i-j);
				break;
			case 3: printf("Mul = %f \n",i*j);
				break;
			case 4: printf("Quotient = %f \n",i/j);
				break;
			default:printf("Invalid Operation\n");
				sleep(2);
				goto abc;
		}
	}
	if(ch == 'c')
	{
		double i,j;
		printf("Enter the two number \n");
		scanf("%lf%lf",&i,&j);
		switch(k)
		{
			case 1: printf("Sum = %lf \n",i+j);
				break;
			case 2: printf("Sub = %lf \n",i-j);
				break;
			case 3: printf("Mul = %lf \n",i*j);
				break;
			case 4: printf("Quotient = %lf \n",i/j);
				break;
			default:printf("Invalid Operation\n");
				sleep(2);
				goto abc;
		}
	}

}
