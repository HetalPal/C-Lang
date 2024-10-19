#include<stdio.h>

int main()
{
	int size;
	
	printf("Enter the size of an Array:");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n-*-*-*-Array Input-*-*-*-\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n-*-*-*-Array Outpat-*-*-*-\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);	
	}
	
	int sum=0;
	
	printf("\n\n-*-*-*-Sum of Array-*-*-*-\n\n");
	
	for(i=0;i<size;i++)
	{
		sum += a[i];
	}
	
	printf("%d",sum);
}
