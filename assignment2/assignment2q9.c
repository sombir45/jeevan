#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,f,g,h,rad,dis,Rad,ar;

	printf("enter the values of a,b,c,d,e,f,g,h:");
	scanf("%f %f %f %f %f %f %f %f", &a,&b,&c,&d,&e,&f,&g,&h);
	rad = sqrt((-e/2)*(-e/2) + (-f/2)*(-f/2) + (-g/2)*(-g/2) - h );
	dis = (a*(-e/2) + b*(-f/2) + c*(-g/2) + d)/sqrt(a*a + b*b + c*c);
       Rad = sqrt(rad*rad-dis*dis);

       
       ar = 3.14*Rad*Rad;
       printf("the area of the required circle is %f",ar);
	 



}
