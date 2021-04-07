/* 5.Write a program which returns difference between Even factorial and odd factorial of given number.

Input:	5
Output:	-7	(8-15)

Input:	-5
Output:	-7	(8-15)

Input:	10
Output:	2895	(3840-945)	*/





#include<stdio.h>

int Return(int ino)
{
	int icnt=0,imult1=1,imult2=1,idiff=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<=ino;icnt++)
	{
		if((icnt%2)==0)
		{
			imult1=imult1*icnt;
		}
	}

	for(icnt=1;icnt<=ino;icnt++)
	{
		if((icnt%2)!=0)
		{
			imult2=imult2*icnt;
		}
	}

	idiff=imult1-imult2;

	return(idiff);	
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nDifference between factorial of even and odd no. of the given no. is  %d \n",iret);

	return(0);
}

