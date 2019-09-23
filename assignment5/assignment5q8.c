#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=10;y++)
	{
		for(x=1;x<=18;x++)
		if((y==1&&x>6&&x<12)||(y==2&&x>5&&x<12)||(y==3&&x>4&&x<12)||(y==4&&x>2&&x<12)||(y==5&&x>1&&x<12)||(y==6&&x>1&&x<12)||(y==7&&x<12)||(y==8&&x<12)||(y>8&&y<11))	
			printf("*");
		else
			printf("0");
		printf("\n");
	
	}	


}
