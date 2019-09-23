#include<stdio.h>
void main()
{
	int i,n;
	printf("write all the multiples of 3 and 7 till:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if((i%3==0)||(i%7==0))
			printf("%d\n",i);
	}
}
