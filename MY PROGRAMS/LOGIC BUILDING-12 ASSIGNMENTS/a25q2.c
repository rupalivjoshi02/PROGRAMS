/* 2. Accept Character from user and check whether it is capital or not (A-Z).

Input:F
Output:TRUE

Input:d
Output:FALSE

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Str(char ch)
{
/*
	if((ch>='A') && (ch<='Z'))
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
*/

	if((ch>=65) && (ch<=90))
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
	char cvalue='\0';
	BOOL bret=NO;

	printf("Enter the character:");
	scanf("%c",&cvalue);

	bret=Str(cvalue);

	if(bret==YES)
	{
		printf("It is a capital character");
	}
	else
	{
		printf("It is not a capital character");
	}

	return(0);
}



