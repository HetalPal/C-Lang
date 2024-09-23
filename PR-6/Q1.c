#include<stdio.h>


int add(int a,int b)
{	
	return a+b;
}

int sub(int a,int b)
{	
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

float div(float c,float d)
{	
	return c/d;
}

int modual(int a,int b)
{	
	return a%b;
}

int main()
{
	int choice,i;
	int a,b;
	float c,d;
	
	do
	{
	
	printf("\n\n***Arithmetic Operations Calculator***\n\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multiplication\n");	
	printf("Press 4 for Division\n");
	printf("Press 5 for Modules\n");
	printf("Press 0 for Exit\n");
	printf("\n\nEnter any number:");
	scanf("%d",&choice);
	

	
			switch(choice)
			{
				case 1:
					printf("Enter First Integer number:");
					scanf("%d",&a);
	
					printf("Enter Second Integer number:");
					scanf("%d",&b);
					
					printf("%d + %d = %d",a,b,add(a,b));
				break;
				
				case 2:
					printf("Enter First Integer number:");
					scanf("%d",&a);
	
					printf("Enter Second Integer number:");
					scanf("%d",&b);
					
					printf("%d - %d = %d",a,b,sub(a,b));
				break;
				
				case 3:
					printf("Enter First Integer number:");
					scanf("%d",&a);
	
					printf("Enter Second Integer number:");
					scanf("%d",&b);
					
					printf("%d * %d = %d",a,b,mul(a,b));
				break;
				
				case 4:
					printf("Enter First Integer number:");
					scanf("%f",&c);
	
					printf("Enter Second Integer number:");
					scanf("%f",&d);
					
					printf("%.2f / %.2f = %.2f",c,d,div(c,d));
				break;
				
				case 5:
					printf("Enter First Integer number:");
					scanf("%d",&a);
	
					printf("Enter Second Integer number:");
					scanf("%d",&b);
					
					printf("%d %% %d = %d",a,b,modual(a,b));
				break;
				
			default: 
				printf("Exitting Calculatur....");
		
			printf("\n");
				
			}
		}while(choice!=0);
		
	printf("\n");
}
