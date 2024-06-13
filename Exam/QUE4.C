#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;

	clrscr();

	printf("Enter the value of x:");
	scanf("%d",x);

	printf("Enter the value of y:");
	scanf("%d",y);

	printf("x\t:%d\ny\t:%d",x,y);
	printf("\n\n");

	x = y/x;
	y = y/x;
	x = y*x;

	printf("value of x:%d",x);
	printf("value of y:");
	getch();
}