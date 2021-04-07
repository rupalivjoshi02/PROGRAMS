/* 	2.Write a program which accept number from user and print numbers till that number.

	Input:	8
	Output:	1 2 3 4 5 6 7 8		*/





#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=1;

	while(icnt<=ino)
	{
		printf("%d\t",icnt);

		icnt++;	
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
