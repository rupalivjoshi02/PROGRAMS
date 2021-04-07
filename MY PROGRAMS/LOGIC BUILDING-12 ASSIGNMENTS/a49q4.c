/* Write a recursive program which accept number from user and return its factorial.

Input:	5
Output:	120

*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int ifact=1,i=1;

	if(ino<0)
	{
		ino=-ino;
	}
	
	if(i<=ino)
	{
		ifact=ifact*i;

		i++;

		ReturnR(ino);
	}

	return(ifact);
}

int main()
{
	int iret=0,ivalue=0;
	
	printf("\nInside main fun.\n");

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nFactorial of the given no. is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
