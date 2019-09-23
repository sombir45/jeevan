#include<stdio.h>
void main()
{
	int a,b,c,d,x,y;
	char i;
	printf("enter the real parts and imaginary parts of complex no. 1 and 2:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	x = a+c;
	y= b+d;
	printf("the new complex number is %d+%di",x,y);


}
