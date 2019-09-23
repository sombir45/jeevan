#include<stdio.h>
void main()
{
	int i,n;
	printf("the series will be till:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		if((i<20)||((i>50)&&(i<70))||(i>90))
			printf("%d\n",i);

}
