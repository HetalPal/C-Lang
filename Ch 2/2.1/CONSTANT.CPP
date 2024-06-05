#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define P printf
#define clear clrscr
#define hold getch

main()
{
	const int A =25;

	clear();
	P( "A\t:%d\n",A);
	P("PI\t:%.2f\n",PI);
	P("Hello World");

	hold();

}
