#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,f,g,h,i,s,ar;
	printf("the x coordinates of the triangle is:");
	scanf("%f %f %f",&a,&c,&e);
	printf("\n the y coordinates of the triangle in the same order is:");
	scanf("%f %f %f",&b,&d,&f);
	g = sqrt((a-b)*(a-b)+ (c-d)*(c-d));
	h = sqrt((a-b)*(a-b) + (e-f)*(e-f));
	i = sqrt((c-d)*(c-d) + (e-f)*(e-f));
	printf("\n the lengths of the sides of the triangle is %f %f %f",g,h,i);
	s = (g+h+i)/2;
	ar = sqrt(s*(s-g)*(s-h)*(s-i));
	printf("\n the area of the triangle is %f",ar);

}
