#include<stdio.h>
void main()
{
	int i,n;
	printf("the numbers will be till:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		if((i%2==0)&&(i%3!=0)&&(i%5!=0))
			printf("%d\n",i);

}
