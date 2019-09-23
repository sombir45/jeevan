#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,l;
	printf("the x and y coordinates of first point :");
	scanf("%f %f",&a,&b);
	printf("\n the x and y coordunates of the second point:");
	scanf("%f %f", &c,&d);
	l = sqrt((a-c)*(a-c) +(b-d)*(b-d));
	printf("the distance between these two points is %f",l);

}
