/* 	3.Write a program which accept number from user and display all its non factors.

	Input:	12
	Output:	5 7 8 9 10 11

	Input:	13
	Output:	2 3 4 5 6 7 8 9 10 11 12 

	Input:	10
	Output:	3 4 6 7 8 9		*/

#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<ino;icnt++)
	{
		if((ino%icnt)!=0)
		{
			printf("%d\t",icnt);
		}
	}
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	Display(ivalue);	

	return(0);
}
