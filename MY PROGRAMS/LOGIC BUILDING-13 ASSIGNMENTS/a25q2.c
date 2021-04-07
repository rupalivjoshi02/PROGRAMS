/* Accept Character from user and check whether it is capital or not (A-Z).

Input:	F 
Output: YES

Input:	d
Output: NO

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char ch)
{
	if((ch>='A') && (ch<='Z'))
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

	bret=Bool(cvalue);

	if(bret==YES)
	{
		printf("It is a capital character.");
	}
	else
	{
		printf("It is not a capital character.");
	}

	return(0);
}


