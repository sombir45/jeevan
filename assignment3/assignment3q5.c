#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,m;
	printf("enter the values of a,b,c, in the equation of striaght line ax+by+c=0 :");
	scanf("%f %f %f",&a,&b,&c);
	m = (-a)/b;
	printf("the slope of the line is %f",m);
	if(1/m == 0)
		printf("\n the line is vertical");
	else
		printf("\n the line is not vertical");

}
