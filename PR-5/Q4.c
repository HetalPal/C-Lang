#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter Row:");
	scanf("%d",&row);
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col];
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
	
	int r;
	int rs=0;
	
	printf("\n\n* * * Sum of Row * * *\n\n");
	
	printf("Enter the number of Row:");
	scanf("%d",&r);
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==r)
			{
				printf("%d",a[i][j]);
				rs += a[i][j];
			}
		}
	}
	printf("\nSum of Row is %d",rs);
	
	int c;
	int cs=0;
	
	printf("\n\n* * * Sum of Column * * *\n\n");
	
	printf("Enter the number of Column:");
	scanf("%d",&c);
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==c)
			{
				printf("%d",a[j][i]);
				cs += a[j][i];
			}
		}
	}
	printf("\nSum of Column is %d",cs);
}
