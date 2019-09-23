#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,m;
	printf("enter the lengths of the sides of the triangle in a,b,c,:");
	scanf("%f %f %f",&a,&b,&c);
	if(a*a == b*b + c*c)
	{
		m = 90;
		printf("the value of angle A is %f",m);
	}
	else
	printf("tha angle A is not a right angle");	

}
