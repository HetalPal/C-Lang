#include<stdio.h>
#include<conio.h>

main()
{
	char h='A';
	int i,j;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%c",70-j);
		}
		printf("\n");
	}
	getch();
}