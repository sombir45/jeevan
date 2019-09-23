#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=6;y++)
	{
		for(x=1;x<=30;x++)
		if((y%2==0)&&(x%3==1)||(y%2==0)&&(x%5==1))	
		printf("*");
		else
		printf("0");
		printf("\n");

	
	}


}
