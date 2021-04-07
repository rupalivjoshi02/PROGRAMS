/* Accept Character from user and check whether it is small case or not (a-z).

Input:	g
Output: YES

Input:	D
Output: NO

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char ch)
{
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

	bret=Bool(cvalue);

	if(bret==YES)
	{
		printf("It is a small case.");
	}
	else
	{
		printf("It is not a small case.");
	}

	return(0);
}


