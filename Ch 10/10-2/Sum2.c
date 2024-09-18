#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter Row:");
	scanf("%d",&row);
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col],b[row][col];
	int i,j;
	
	printf("\n\n* * * First Array Input * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n* * * Second Array Input * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n* * * First Array Output * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	printf("\n\n* * * Second Array Output * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);		
		}
		printf("\n");
	}
	
	int sum[row][col];
	
	printf("\n\n* * * Addition of 2 Array * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = a[i][j]+b[i][j];		
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);		
		}
		printf("\n");
	}
	
	
}
