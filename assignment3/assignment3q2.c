#include<stdio.h>
void main()
{
	float a,b,c,d,w;
	printf("enter any four numbers:");
	scanf("%f %f %f %f", &a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		
		{

		if(a>d)
		{ 
		w = a;
		}
		else 
		{ 
		w = d;
		}

		}

		else
		{ if(c>d)
			{w = c;}
			else
			{w = d;}
		}
	}
	else
	{
		if(b>c)
			
		{
		
		if(b>d)
		{w = b;}
		else
		{ w =d;}

		}

		else
		
		{

		if(c>d)
		{ w = c;}
		else
		{ w= d;}
		}

	}

	printf("the greatest number is %f",w);






}
