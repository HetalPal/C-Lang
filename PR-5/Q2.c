#include<stdio.h>

void main()
{
	int row,col;
	
	printf("Enter the number of Row:");
	scanf("%d",&row);
	printf("Enter the number of Column:");
	scanf("%d",&col);
	
	int  a[row][col];
	int i,j;
	
	printf("\n\n* * * Array Input * * * \n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n* * * Array Output * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int large=0;
	
	printf("\n\n* * * Largest Number * * *\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(large<a[i][j])
			{
				large=a[i][j];
			}
		}
	}
	printf("The largest number of an Array is %d",large);
}
