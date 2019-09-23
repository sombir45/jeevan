#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<80;i++)
	{
		if(((i>20)&&(i<40)&&(i%2==0))||((i>50)&&(i%2!=0)))
		{	printf("%d\n",i);}

	}

}
