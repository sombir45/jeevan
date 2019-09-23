#include<stdio.h>
void main()
{

	int a,b,c,d,e,f;
	printf("enter any number whose once digit is less than five ");
	scanf("%d",&a);
	b = a/10;
	c = a%10;
	printf("\n the last digit of the number is %d",c);
	 e = 2*c;
	 f = b*10 + e;
	 printf("\n the new number obtained after doubling its once digit is %d",f);

}
