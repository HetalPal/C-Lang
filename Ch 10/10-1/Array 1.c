#include<stdio.h>

main()
{
	int size;
	int i;
	
	printf("Enter the size of element:");
	scanf("%d",&size);
	
	int a[size];
	
	printf("\n\nArray Input\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nArray Output\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
