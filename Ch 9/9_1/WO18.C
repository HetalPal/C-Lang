#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			if(j%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	getch();
}