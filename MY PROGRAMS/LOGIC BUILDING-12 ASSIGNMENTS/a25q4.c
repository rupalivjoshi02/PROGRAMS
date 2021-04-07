/* Accept Character from user and check whether it is small case or not (a-z).

Input:g
Output:TRUE

Input:D
Output:FALSE

*/



#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Str(char ch)
{
/*
	if((ch>=97) && (ch<=122))
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
*/

	if((ch>='a') && (ch<='z'))
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
		printf("It is a small character");
	}
	else
	{
		printf("It is not a small character");
	}

	return(0);
}

