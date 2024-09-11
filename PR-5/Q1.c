#include<stdio.h>

void main()
{
	int size;
	
	printf("Enter the number of size:");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n* * * Array Input * * *\n\n ");
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("* * * Array Output * * *\n\n");
	
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}
