#include<stdio.h>
void main()
{
	float a,b,c,m;
	printf("enter three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)

	{
	if(b>c)

	{m = a;

	printf("the greatest number is %f",m);
	}

	}

	else
		
	{
		if(b>c)
		{
		m = b;
		printf("the greatest number is %f",m);

		}

		else
		{
			m = c;
			printf("the greatest number is %f",m);
		}
	
	
	}
}
