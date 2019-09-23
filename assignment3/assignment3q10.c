#include<stdio.h>
#include<math.h>
void main()
{

	float a,b,c,d,x,a1,b1,c1,d1,w;
	printf("enter any five numbers:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&x);
	if(a==x)
	  {a1 =1; }
	else
	    {a1=0;}
	if(b==x)
	    {b1=1; }
	else
	  {b1=0;}
	if(c==x)
	{c1=1;}
	else
	{c1=0;}
	if(d==x)
	{d1 =1;}
	else
	{d1=0;}
	w = a1+b1+c1+d1;
	printf("the numbersof terms which have equal values is %f",w);
}
