#include<stdio.h>
#include<conio.h>

main()
{
       int a,b,c;

	clrscr();

	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("Enter the value of b:");
	scanf("%d",&b);

	c = a;
	a = b;
	b = c;

	printf("\n");
	printf("The value of a is %d\n",a);
	printf("The value of b is %d\n",b);
	printf("The value of c is %d",c);

	getch();
}