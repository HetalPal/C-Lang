#include<stdio.h>

main()
{
	int size;
	
	printf("Enter number of element:");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n***** Input*****\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n***** Output*****\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	int sum=0;
	
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	
	printf("\n\nSum of Array is %d",sum);
}
