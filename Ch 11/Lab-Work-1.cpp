#include<stdio.h>

void cube(int a);

int  main()
{
	int a1;
	
	printf("Enter any number:");
	scanf("%d",&a1);
	
	cube(a1);
}

void cube(int a)
{
	printf("\n\n");
	printf("%d * %d * %d = %d",a,a,a,a*a*a);
}

