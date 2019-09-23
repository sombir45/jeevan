#include<stdio.h>
void main()
{
	int a1,b1,c1,a2,b2,c2,l;
	printf("enter the values of a1,b1,c1,a2,b2,c2 of two vectors:");
	scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
	l = a1*a2+b1*b2+c1*c2;
	printf("the dot product of these vectors is %d ",l);

}
