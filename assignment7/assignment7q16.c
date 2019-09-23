#include<stdio.h>
void main()
{
	int i,x,n,s = 0;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s = s+x;
	
	}
	printf("the sum is %d",s);



}
