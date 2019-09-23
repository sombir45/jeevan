#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("enter any three integers:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b&&b>c)||(a<b&&b<c))
		printf("the middle term is %d",b);
	if((b>a&&a>c)||(b<a&&a<c))
		printf("the middle term is %d",a);
	if((a>c&&c>b)||(a<c&&c<b))
		printf("the middle term is %d",c);


}
