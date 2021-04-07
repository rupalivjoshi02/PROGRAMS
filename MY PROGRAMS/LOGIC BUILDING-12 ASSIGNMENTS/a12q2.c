//Write a program which accept number from user and check whether it contains 0 in it or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Bool(int ino)
{
	int idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino==0)
	{
		return(FALSE);
	}

	while(ino!=0)
	{
		idig=ino%10;

		if(idig==0)
		{
			break;
		}

		ino=ino/10;
	}	

	if(ino==0)
	{
		return(FALSE);
	}
	else
	{
		return(TRUE);
	}
}

int main()
{
	int ivalue=0;
	BOOL bret=FALSE;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	bret=Bool(ivalue);

	if(bret==TRUE)
	{
		printf("Yes no. contains 0");
	}
	else
	{
		printf("No no. does not contain 0");
	}

	return(0);
}

