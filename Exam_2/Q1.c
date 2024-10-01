#include<stdio.h>

int main()
{
	int l,h;
	
	printf("Enter the length of Triangle:");
	scanf("%d",&l);
	printf("Enter the hight of Triangle:");
	scanf("%d",&h);
	
	printf("\n\n-*-*-*-Area of Triangle-*-*-*-\n\n");
	
	printf("The area of Triangle is %d*%d/2=%d",l,h,(l*h)/2);
}
