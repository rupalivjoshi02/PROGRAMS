/* 3. Accept Character from user and check whether it is digit or not (0-9).

Input:7
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
	if((ch>='0') && (ch<='9'))
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
		printf("It is a digit");
	}
	else
	{
		printf("It is not a digit");
	}

	return(0);
}


