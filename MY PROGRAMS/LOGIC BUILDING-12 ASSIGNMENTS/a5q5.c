/* 	5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

	Input:	12
	Output:	-34	(16-50);	

	Input:	10
	Output:	-29	(8-37)		*/





#include<stdio.h>

int Return2(int ino)
{
	int icnt=0,isum1=0,isum2=0,idiff=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<ino;icnt++)
	{
		if((ino%icnt)==0)
		{
			isum1=isum1+icnt;
		}
	}

	for(icnt=1;icnt<ino;icnt++)
	{
		if((ino%icnt)!=0)
		{
			isum2=isum2+icnt;
		}
	}

	idiff=isum1-isum2;

	return(idiff);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return2(ivalue);

	printf("\nDifference between summation of factor and non-factors of the given no. is %d \n",iret);

	return(0);
}
