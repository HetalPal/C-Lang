#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter any Alphabet:");
	scanf("%c",&c);
	
	printf("\n");
	
	switch(c)
	{
		case 'a':
		case 'A':	
			printf("The Alphabet is Vowel...");
		break;
		
		case 'e':
		case 'E':
			printf("The Alphabet is Vowel...");
		break;
		
		case 'i':
		case 'I':	
			printf("The Alphabet is Vowel...");
		break;
		
		case 'o':
		case 'O':
			printf("The Alphabet is Vowel...");
		break;
		
		case 'u':
		case 'U':
			printf("The Alphabet is Vowel...");
		break;	
		
		default:
			printf("The Alphabet is Constant");
	}
}
