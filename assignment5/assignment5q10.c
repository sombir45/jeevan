#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=10;y++)
	{
		for(x=1;x<=20;x++)
		if((y<3)||(y==3&&x<7&&x>8)||(y==4&&x<6&&x>10)||(y==5&&x<5&&x>12)||(y==6&&x<4&&x>14)||(y==7&&x<3&&x>16)||(y==8&&x<2&&x>18))
		printf("*");
		else
			printf("0");
		printf("\n");
	
	}


}
