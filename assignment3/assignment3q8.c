#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,w;
	printf("enter three numbers two of them must be same:");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b)
	{
		w = c;
	}
	
	if(b==c)
		{
			w = a;
		}
	if(a==c)
		{
			w = b;
		}	
	
	
	printf("the different number is %f",w);

}
