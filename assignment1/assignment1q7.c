#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter the term :");
	scanf("%d",&a);

	b = a%10;
	printf("the last digit is %d /n",b);
	c = a/10;
	d = c%10;
	printf("the second last digit of the number is %d /n",d);
	e = b+d;
	printf("sum of last two digits is %d /n",e);

}
