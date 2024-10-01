#include<stdio.h>

int main()
{
	int size;
	
	printf("Enter the value of size:");
	scanf("%d",&size);
	
	int a[size],i;
	
	printf("\n\n* * * Array Input * * *\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n* * * Array Output * * *\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\n");
	
	int sum=0;
	
	printf("\n\n* * * Sum of Array * * *\n\n");
	
	for(i=0;i<size;i++)
	{
		if (a[i]>0)
		{
			sum += a[i];
		}
		
	}
	
	printf("Sum of Array is %d",sum);
}
