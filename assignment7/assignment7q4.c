#include<stdio.h>
void main()
{
	float a,b,c,d,e,f;
	printf("enter the coordiantes of first point and then of second point:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	e = (a+c)/2;
	f = (b+d)/2;
	printf("(%f %f) ",e,f);

}
