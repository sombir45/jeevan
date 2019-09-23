#include<stdio.h>
void main()
{  

	int a,b,c,d;
	printf("enter any number:");
	scanf("%d", &a);
	b = a%10;
	c = a/100;
	d = c*10 + b;
	printf("the number after deleting the second last digit is %d",d);



}
