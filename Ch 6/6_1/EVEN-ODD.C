#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enter any number:");
	scanf("%d",&a);

	if(a/2*2==a)
	{
		clrscr();
		printf("%d is EVEN number.",a);
	}
	else
	{
		clrscr();
		printf("%d is ODD number.",a);
	}

	getch();
}