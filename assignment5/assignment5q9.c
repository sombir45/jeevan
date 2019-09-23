#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=9;y++)
	{
		for(x=1;x<=20;x++)
		if((y==4&&x>5&&x<8)||(y==5&&x>4&&x<9)||(y==6&&x>3&&x<10)||(y==7&&x>2&&x<11)||(y==8&&x>1&&x<12)||(y==9&&x<13))
		printf("0");
		else
		printf("*");
		printf("\n");
	
	
	}

}
