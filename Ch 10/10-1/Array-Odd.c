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
	
	printf("\n\n");
    printf("*****Odd Numbers*****\n");
    
	for(i=0;i<size;i++)
	{
		if(a[i]%2 != 0)
		{
			
			printf("%d\t",a[i]);
		}
	}
}
