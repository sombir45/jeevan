#include<stdio.h>
#include<math.h>
void main()
{
	float h,k,r,s,d,l;
	printf("enter the values of h,k,r and s:");
	scanf("%f %f %f %f",&h,&k,&r,&s);
	d = sqrt((s-h)*(s-h));
	l = 2*(sqrt(r*r - d*d));
	printf("the length of the chord is %f",l);


}
