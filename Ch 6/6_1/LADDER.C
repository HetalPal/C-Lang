#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e,Total;
	float Persantage;

	clrscr();

	printf("Enter your mark:");
	scanf("%d",&a);

	printf("Enter your mark:");
	scanf("%d",&b);

	printf("Enter your mark:");
	scanf("%d",&c);

	printf("Enter your mark:");
	scanf("%d",&d);

	printf("Enter your mark:");
	scanf("%d",&e);

	Total = a+b+c+d+e;
	printf("Total is %d\n",Total);
	Persantage =((Total)/500.)*100;
	printf("Your Persantage is %.2f %%\n",Persantage);

	if(Persantage>=91 && Persantage<=100)
	{
		printf("Your Grade :A+");
	}
	else if(Persantage>=81 && Persantage<=90)
	{
		printf("Your Grade :A");
	}
	else if(Persantage>=71 && Persantage<=80)
	{
		printf("Your Grade :B+");
	}
	else if(Persantage>=61 && Persantage<=70)
	{
		printf("Your Grade :B");
	}
	else if(Persantage>=51 && Persantage<=60)
	{
		printf("Your Grade :C+");
	}
	else if(Persantage>=41 && Persantage<=50)
	{
		printf("Your Grade :C");
	}
	else if(Persantage>=33 && Persantage<=40)
	{
		printf("Your Grade :D");
	}
	else
	{
		printf("Better Luck....Next Time!!!");
	}

	getch();
}