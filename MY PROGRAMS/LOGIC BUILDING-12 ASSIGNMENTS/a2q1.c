// 1.Accept one number from user and print that number of * on screen.




#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int ivalue=0;
	
	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
