#include<stdio.h>
#include<conio.h>

main()
{       int h,t,l;

	clrscr();

	printf("Enter the value of h : ");
	scanf("%d",&h);

	printf("Enter the value of t : ");
	scanf("%d",&t);

	printf("Enter the value of l : ");
	scanf("%d",&l);

	if(h==t || t==l || h==l)
	{
		clrscr();
		printf("All are equal.....");
	}
	else
	{
		if(h>t)
		{
			if(h>l)
			{
				clrscr();
				printf("%d is maximum.",h);
			}
			else
			{
				clrscr();
				printf("%d is maximum.",l);
			}

		}
		else
		{
			if(t>l)
			{
				clrscr();
				printf("%d is maximum.",t);
			}
			else
			{
				clrscr();
				printf("%d is maximum.",l);
			}
		}

	}
	getch();
}















