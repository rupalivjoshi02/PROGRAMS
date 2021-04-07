/* Write a recursive program which accept number from user and return its reverse number.

Input:	523
Output:	325

*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int idig=0,irev=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino!=0)
	{
		idig=ino%10;
		irev=(irev*10)+idig;
		ino=ino/10;

		ReturnR(ino);
	}

	return(irev);
}

int main()
{
	int iret=0,ivalue=0;
	
	printf("\nInside main fun.\n");

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nRevesed no. is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
