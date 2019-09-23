#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,p,q,r,d,l,ar;
	printf("enter the values of  a,b,c,p,q,r:");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	d = (a*p+b*q+c)/(sqrt(a*a+b*b));

	if(d>r)
		printf("the line does not intersect the circle");
	
		
	 if(d<r)
		
			{ l = (sqrt(r*r-d*d));
			ar = (d*l);
			printf("the line intersect the circle at two points and the length of AB is %f and the area of the triangle ABC is %f",l,ar);
				
	
	
	}

}
