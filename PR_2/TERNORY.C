#include<stdio.h>
#include<conio.h>

main()
{
	char Grade;
	int a;

	clrscr();

	printf("Enter your marks :");
	scanf("%d",&a);

	(a >= 91 && a<=100)
		? printf(" %d Your grade is A", a)
		: (a >= 81 && a<= 90)
			? printf("%d Your grade is B",a)
			: (a >= 71 && a<= 80)
				?printf("%d Your grade is C",a)
				:(a >= 61 && a<=70)
					? printf("%d Your grade is D",a)
					: (a >= 33 && a<=50)
						? printf("%d Your grade is E",a)
						: (a >= 0 && a<=32)
							? printf("%d Your grade is F",a)
							: printf("Better Luck !!! Next time....");
	 switch(Grade)
	 {
		case 'A':
			printf("Your grade is A. Excellent Work !!!");
		break;

		case 'B':
			printf("Your grade is B. Well Done .");
		break;

		case 'C':
			printf("Your grade is C. Good job.");
		break;

		case 'D':
			printf("Your grade is D. You are Pass.");
		break;

		case 'E':
			printf("Your grade is E. You are pass, but you could do better.");
		break;

		case 'F':
			printf("Sorry you failed...Next time...");
		break;
	}
	getch();

   }
