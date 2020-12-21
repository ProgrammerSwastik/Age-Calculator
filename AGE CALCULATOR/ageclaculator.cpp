#include<stdio.h>
#include<conio.h>

int cy=2020;
int by;

	
int main()
{	

    printf("\n");

    printf("********************************WELCOME TO THE AGE CALCULATOR*******************************\n");
    
    printf("\n");
    
    printf("Enter your birth year:");
	scanf("%d", & by);

	int age=cy-by;
	
	printf("Your are %d years old.\n",age);
	
	printf("\n");
	
	printf("********************************BYE BYE*******************************\n");
	
	getch();
}

