#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=6;y++)
	{
		for(x=1;x<=y;x++)
			printf("%c",63+x+y);
		printf("\n");
	
	}

}
