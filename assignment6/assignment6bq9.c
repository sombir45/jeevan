#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=6;y++)
	{
		for(x=1;x<=7-y;x++)
		{
			printf("%c",64+x);
		}
		printf("\n");
	
	}

}
