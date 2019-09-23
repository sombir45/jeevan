#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,f,l;
	printf("the coordinates of the point are:");
	scanf("%f %f",&a,&b);
	printf("enter the coefficients of x and y and the constant of the equation of line:");
	scanf("%f %f %f",&c,&d,&e);
	f = sqrt(c*c+d*d);
	l = (a*c + b*d + e)/f;
	printf("the distance between the point and the line is %f",l);


}
