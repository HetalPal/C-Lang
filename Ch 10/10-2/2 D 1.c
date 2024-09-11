#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter the value of Row :");
	scanf("%d",&row);
	printf("Enter the value of Column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n*****Array Input*****\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the value of a[%d][%d]",a[i][j]);
			scanf("%d",&a[i][j]);
		}s
		printf("\n");
	}
	
	printf("\n*****Array Output*****\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum += a[i][j];
		}
		printf("\nAddition of Array is :%d",sum);
		
		float avg = (float)sum/(row*col);
		
		printf("\nAverage of Array is :%.2f",avg);
	}
}
