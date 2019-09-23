#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,y1,r;

	printf("the equation of circle is x*x + y*y + a*x + b*y + c = 0");
	printf("\n enter the values of a,b,c:");
	scanf("%f %f %f",&a, &b, &c);
	x1 =(-1)*(a)/2;
	y1 =(-1)*(b)/2;
	printf("\n the coordinates of the centre is %f %f",x1,y1);
	r =sqrt(x1*x1 + y1*y1 - c);

	printf("\n the radius of the circle is %f",r);
}
