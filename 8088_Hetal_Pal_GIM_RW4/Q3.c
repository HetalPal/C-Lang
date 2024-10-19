#include<stdio.h>

int main()
{
	int a,b,result;
	
	printf("Enter your first amount:");
	scanf("%d",&a);
	printf("Enter your second amount:");
	scanf("%d",&b);
	
	if(a<b)
	{
	
		result = b-a;
		printf("You got Profit %d :)",result);
	}
	else
	{
		result = b-a;
		printf("You got Loss %d :(",result);
	}
}
