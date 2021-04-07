/* 3.Write a program to find even factorial of given number.

Input:	5
Output:	8	(4*2)

Input:	-5
Output:	8	(4*2)

Input:	10
Output:	3840	(10*8*6*4*2)	*/




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
		if((icnt%2)==0)
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

	printf("\nFactorial of the even no. of the given no. is %d \n",iret);	

	return(0);
}

