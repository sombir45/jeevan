#include<stdio.h>
#include<math.h>
void main()
{

	float a,b,c,r,d,i1,i2;
	printf("enter the values of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	r = (-b)/2*a;
	d = b*b-4*a*c;
	i1 = (sqrt(-d))/2*a;
	i2 = (-sqrt(-d))/2*a;
	if(d<0)
	{
		printf("the roots of the quadratic equations are %f+%fi %f-%fi",r,i1,r,i2);
	
	
	}







}
