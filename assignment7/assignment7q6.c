#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,e,f,g;
	char i,j,k;
	printf("enter the values of a,b,c of the vector:");
	scanf("%d %d %d",&a,&b,&c);
	d = sqrt(a*a+b*b+c*c);
	e=a/d;
	f=b/d;
	g=c/d;
	printf("the unit vector is %fi+%fj+%fk",e,f,g);

}
