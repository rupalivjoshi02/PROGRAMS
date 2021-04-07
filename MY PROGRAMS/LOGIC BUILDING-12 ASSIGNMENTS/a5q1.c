/* 	Write a program which accept number from user and display its multiplication of factors.

	Input:	12
	Output:	144	(1*2*3*4*6)

	Input:	13
	Output:	1	(1)

	Input:	10
	Output:	10	(1*2*5)		*/





#include<stdio.h>

int Return(int ino)
{
	int icnt=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<ino;icnt++)
	{
		if((ino%icnt)==0)
		{
			imult=imult*icnt;
		}
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nMultiplication of factors of the given no. is %d \n",iret);	

	return(0);
}
