/* 	2.Write a program which accept one number from user and check whether that number is greater than 100 or not.

	Input:	101
	Output:	Greater

	Input:	39
	Output:	Smaller		*/

#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(int ino)
{
	if(ino>100)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}

int main()
{
	int ivalue=0;
	BOOL bret=NO;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	bret=Bool(ivalue);

	if(bret==YES)
	{
		printf("\nThe given no. is greater than 100.\n");
	}
	else	
	{
		printf("\nThe given no. is smaller than 100.\n");	
	}	

	return(0);
}
