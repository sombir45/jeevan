#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=5;y++)
	{
		for(x=1;x<=6-y;x++)
		{printf("%c",70-y);}
		printf("\n");
	
	}

}
