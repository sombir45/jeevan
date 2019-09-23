#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,x;
	float s=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s = sqrt(s*s + x*x);

	
	}
	printf("themagnitude is %f",s);

}
