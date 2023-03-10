//Program to calculate area and circumference of a circle.


#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius;
	printf("Enter the Radius\n");
	scanf("%f",&radius);
	printf("Area = %.2f \n",(pi*radius*radius));
	printf("Circumfenrence of circle = %.2f \n",(2*pi*radius));


}

