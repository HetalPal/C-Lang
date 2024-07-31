#include<stdio.h>
#include<conio.h>
main()
{
	char A;

	clrscr();

	printf("Enter any Character :");
	scanf("%c",&A);

	switch(A)
	{
		case 'a':
			clrscr();
			printf("%c is Vowel Character...",A);
		break;

		case 'e':
			clrscr();
			printf("%c is Vowel Character...",A);
		break;

		case 'i':
			clrscr();
			printf("%c is Vowel Character...",A);
		break;

		case 'o':
			clrscr();
			printf("%c is Vowel Character...",A);
		break;

		case 'u':
			clrscr();
			printf("%c is Vowel Character...",A);
		break;

		default :

				clrscr();
				printf("%c is Constant Character...",A);

	}
	getch();
}