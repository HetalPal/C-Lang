#include<stdio.h>

int num(int a)
{
	if(a%2==0)
	{
		printf("%d is Even number...",a);
	}
	else
	{
		printf("%d is Odd number...",a);
	}
}

int main()
{
	int a;
	
	printf("Enter any number:");
	scanf("%d",&a);
	
	printf("\n");
	
	num(a);
	
}
