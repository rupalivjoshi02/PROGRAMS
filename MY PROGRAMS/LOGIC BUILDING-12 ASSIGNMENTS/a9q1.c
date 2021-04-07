/* 1.Write a program which accept number from user and display below pattern.

Input:	5
Output:	* * * * * # # # # #

Input:	-5
Output:	* * * * * # # # # #

Input:	6
Output:	* * * * * * # # # # # #

Input:	2
Output:	* * # #	*/




#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<=2*ino;icnt++)
	{
		if(icnt<=ino)
		{
			printf("*\t");
		}
		else
		{
			printf("#\t");
		}
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

