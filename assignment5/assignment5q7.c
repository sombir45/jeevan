#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=10;y++)
	{
		for(x=1;x<=17;x++)
		if((y==2&&x>6&&x<12)||(y==3&&x>5&&x<13)||(y==4&&x>4&&x<14)||(y==5&&x>3&&x<15)||(y==6&&x>3&&x<15)||(y==7&&x>4&&x<14)||(y==8&&x>5&&x<13)||(y==9&&x>6&&x<12))
		printf("*");
		else
			printf("0");
		printf("\n");
	
	}	

}
