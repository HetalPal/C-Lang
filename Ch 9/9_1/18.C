#include<stdio.h>     //18
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
			{
				printf("0\t");
			}
			else
			{
				printf("1\t");
			}
		}

		printf("\n");
	}
	getch();
}