#include<stdio.h>
#include<math.h>
void main()
{
	float d,b,c,x,y,an;
	printf("the sides of the triangle are :");
	scanf("%f %f %f",&d,&b,&c);
	x = (b*b + c*c -d*d)/(2*b*c);
	y = acos(x);
	an = (y*180)/3.14;
	printf("the value of the angle in radian is %f", y);
	printf("\n the value of the angle in degrees is %f", an);


}
