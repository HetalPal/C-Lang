#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;

	clrscr();

	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);

	if(a<b)
	{
		clrscr();
		printf("%d is  minimum number :",a);
	}
	else
	{
		clrscr();
		printf("%d is minimum number :",b);
	}


	getch();
}