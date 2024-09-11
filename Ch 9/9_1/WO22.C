#include<stdio.h>
#include<conio.h>

main()
{
	char h='A';
	int i,j;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%c",h++);
		}
		printf("\n");
	}
	getch();
}