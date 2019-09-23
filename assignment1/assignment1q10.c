#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter the number:");
	scanf("%d",&a);
	b= a%10;
	c = a/10;
	d = c%10;
	printf("the once and tenth digits of the numbers are %d %d",b,d);
	e = a/100;
	f = e*100 + b*10 + d;
	printf("\n the new number after exchanging the last two digits is %d",f);


}
