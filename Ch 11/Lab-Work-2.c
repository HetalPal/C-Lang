#include<stdio.h>

void divisible(int a);

int main()
{
	int a1;
	
	printf("Enter any number:");
	scanf("%d",&a1);
	
	divisible(a1);	
}

void divisible(int a)
{
	int a1;
	
	if(a1%3==0&&a1%5==0)
	{
		printf("This number is divisible by 3 and 5.");
	}
	else
	{
		printf("This number is not divisible by 3 and 5.");
	}
}
