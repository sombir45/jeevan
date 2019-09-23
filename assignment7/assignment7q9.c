#include<stdio.h>
void main()
{
	float a,b,c,d,g,h,e,f;
	printf("enter the real and complex part of complex number 1 and 2:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	g= a*c-b*d;
	h = b*c+a*d;
	e= (a*c+b*d)/(c*c+d*d);
	f= (b*c-a*d)/(c*c+d*d);
	printf("the multiplication is %f+%fi",g,h);
	printf("\n the division is %f + %fi",e,f);
	


}

