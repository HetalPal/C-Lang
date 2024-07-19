#include<stdio.h>
#include<conio.h>

main()
{
	int i;

	clrscr();

	printf("Enetr any number:");
	scanf("%d",&i);

	for(i%2==0;i++)
	{
		printf("%d\t",i);
	}

	getch();
}