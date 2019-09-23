#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=4;y++)
	{
		for(x=1;x<=5-y;x++)
		printf("%c",64+y);	
	}

}
