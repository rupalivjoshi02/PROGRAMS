/* 	4.Write a program which accept number from user and return summation of all its non factors.

	Input:	12
	Output:	50	

	Input:	10
	Output:	37		*/





#include<stdio.h>

int Return(int ino)
{
	int icnt=0,isum=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=1;

	while(icnt<ino)
	{
		if((ino%icnt)!=0)
		{
			isum=isum+icnt;
		}

		icnt++;
	}

	return(isum);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nSummation of non-factors of the given no. is %d \n",iret);	

	return(0);
}
