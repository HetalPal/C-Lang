#include<stdio.h>
#include<conio.h>

main()
{
	int i;

	clrscr();

	printf("Enter any number :");
	scanf("%d",&i);

	while( i<=50 )
	{
		printf("%d\n",i);

		i=i+2;
	}
	getch();

}