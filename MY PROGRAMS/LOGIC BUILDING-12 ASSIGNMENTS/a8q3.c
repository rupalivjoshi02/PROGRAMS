/* 3.Write a program to find factorial of given number.

Input:	5
Output:	120	(5*4*3*2*1)

Input:	-5
Output:	120	(5*4*3*2*1)

Input:	4
Output:	24	(4*3*2*1)	*/




#include<stdio.h>

int Return(int ino)
{
	int icnt=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=ino;

	while(icnt>=1)
	{
		imult=imult*icnt;

		icnt--;
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.:\n");
	scanf("%d",&ivalue);
	
	iret=Return(ivalue);

	printf("\nFactorial of the given no. is %d\n",iret);

	return(0);
}

