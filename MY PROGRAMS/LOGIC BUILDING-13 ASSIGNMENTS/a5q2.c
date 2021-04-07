/* Write a program which accept one number from user and check whether that number is greater than 100 or not.

Input:101
Output:Greater

Input:39
Output:Greater

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Number(int ino)
{
	int i=0;

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

	printf("Enter the no.:");	
	scanf("%d",&ivalue);

	bret=Number(ivalue);

	if(bret==YES)
	{
		printf("No. is greater");
	}
	else
	{	
		printf("No. is smaller");
	}

	return(0);
}


