#include<stdio.h>

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int ans;
	
	printf("Enter any number:");
	scanf("%d",&ans);
	
	ans=fact(ans);
	
	printf("Factorial is %d",ans);
}
