#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,x,y,z;
	char i,j,k;
	printf("enter the direction ratios of both the vectors:");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	x= b*f-c*e;
	y= a*f-c*d;
	z= a*e-b*d;
	printf("the cross product is %di-%dj+%dk",x,y,z);
	

}
