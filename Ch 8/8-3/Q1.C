#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;

	clrscr();

	printf("Enter any number :");
	scanf("%d",&n);

	do
	{
		printf("%d\t",i++);
	}while(i<=n);
	getch();
}