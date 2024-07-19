#include<stdio.h>
#include<conio.h>

main()
{
	int a = 100;
	int p , r , n;
	clrscr();

	printf("Enter the value of p :");
	scanf("%d",&p);
	printf("Enter the value of r :");
	scanf("%d",&r);
	printf("Enter the value of n :");
	scanf("%d",&n);

	printf("\n\n");
	printf("The Simple Interest is :");
	printf("%d * %d * %d / %d = %d",p,r,n,a,p*r*n/a);

	getch();

}
