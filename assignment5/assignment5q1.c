#include<stdio.h>
void main()
{
	int x,y;
	for(y=0;y<5;y++)
	{
		for(x=0;x<20;x++)
		if((x%2==0)||((x%2==1)&&(y%2==0)))
			printf("*");
		else
			printf("0");
		printf("\n");
	
	}	


}
