#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2,r,i1,i2;
	printf("enter the values of a,b,c in the quadratic equation ax*x+bx+c=0:");
	scanf("%f %f %f",&a,&b,&c);
	d = b*b - 4*a*c;
	r1 = (-b+sqrt(d))/(2*a);
	r2 = (-b-sqrt(d))/(2*a);
	r = (-b)/(2*a);
	i1 = (sqrt(-d))/(2*a);
	i2 = (-sqrt(-d))/(2*a);

	if(d>0)
	{
		printf("the roots of this equation are %f %f",r1,r2);
	}
	else 
	{
		if(d==0)
	{
		printf("the root of this equation is %f",r);
	}
	else 
	{
		printf("the real part and imaginary parts of the roots are %f %f %f",r,i1,i2);
	}

	}
	


}
