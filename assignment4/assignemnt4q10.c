#include<stdio.h>
void main()
{
	int i,n;
	printf("the numbers will be untill:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		if(((i%10)>4)&&((i%10)<9))
			printf("%d\n",i);


}
