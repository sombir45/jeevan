#include<stdio.h>
void main()
{
	int x,y;
	for(y=1;y<=1;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",64+x);
	}
	printf("\n");
	for(y=2;y<=2;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",63+2*x);	
	}
        printf("\n");
        for(y=3;y<=3;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",62+3*x);	
	}
	printf("\n");
	for(y=4;y<=4;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",61+4*x);	
	}
	printf("\n");
	for(y=5;y<=5;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",60+5*x);
	}
	printf("\n");
	for(y=6;y<=6;y++)
	{for(x=1;x<=7-y;x++)
	printf("%c",59+6*x);	
	}
	
}
