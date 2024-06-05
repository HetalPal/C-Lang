#include<stdio.h>
#include<conio.h>

main()
{
	int a = 2;
	float pi = 3.14 , r;
	clrscr();

	printf("Enter the value of r :");
	scanf("%f",&r);

	printf("\n\n");
	printf("%d * %.2f * %.2f = %.2f",a,pi,r,a*pi*r);

	getch();

}