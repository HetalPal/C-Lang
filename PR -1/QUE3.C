#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int b;
	int ans;

	clrscr();

	printf("Enter the value of a:");
	scanf("%d",a);

	printf("Enter the value of b:");
	scanf("%d",b);

	printf("The third angle of Triangle is");
	ans = 180 - 65 - 45;
	printf("%d",ans);

	getch();
}