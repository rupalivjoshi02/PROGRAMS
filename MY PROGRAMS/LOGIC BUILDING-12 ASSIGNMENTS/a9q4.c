/* 4. Write a program to find odd factorial of given number.

Input:	5
Output:	15	(5*3*1)

Input:	-5
Output:	15	(5*3*1)

Input:	10
Output:	945	(9*7*5*3*1)	*/




#include<stdio.h>

int Return(int ino)
{
	int icnt=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=1;

	while(icnt<=ino)
	{
		if((icnt%2)!=0)
		{
			imult=imult*icnt;
		}

		icnt++;
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nFactorial of the odd no. of the given no. is %d \n",iret);	

	return(0);
}

