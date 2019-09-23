#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=10;y++)
	{
		for(x=1;x<=20;x++)
		if((y%2==1)||(y==6&&x>4&&x<15)||(y==8&&x>4&&x<15)||(y==10&&x>4&&x<15))
		printf("*");
		else
		printf("0");
		printf("\n");
	
	
	}	


}
