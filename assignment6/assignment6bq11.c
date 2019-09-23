#include<stdio.h>
void main()
{
	int x,y;
	for(y=6;y>=1;y--)
	{
		for(x=1;x<=6;x++)
		{
		if((x+y>=7)&&(x+y<=12))
		{	printf("%c",64+x);}
		else
		{printf(" ") ;}
	

		}
		printf("\n");
	
	}

}
