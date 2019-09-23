#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,x1,x2,x,j;
	char i;
	printf("enter the values of a,b,c in the quadratic equation :");
	scanf("%f %f %f ",&a,&b,&c);
	d =  b*b-4*a*c;
	if(d>0)
	{
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("the roots of the equation are %f\t %f",x1,x2);
	
	}
	if(d<0)
	{
		x = (-b)/(2*a);
		j = (sqrt(-d))/(2*a);
		printf("the roots of the equation are (%f + %fi) and (%f - %fi)",x,j,x,j);

	
	
	
	}



}
