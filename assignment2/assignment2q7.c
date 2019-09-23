#include<stdio.h>
void main()
{
	float a,b,c,p,q,r,x,y;
	printf("enter the values of a,b,c of ax + by + c=0 :");
	scanf("%f %f %f",&a,&b,&c);
	printf("enter the value of p,q,r of px + qy + r=0 :");
	scanf("%f %f %f",&p,&q,&r);
	x = (b*r - c*q)/(a*q - b*p);
	y = (c*p - a*r)/(a*q - b*p);
	printf("the solution of the lines is %f %f",x,y);


}

