/* Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

Input:	%
Output:	YES

Input:	d
Output:	NO

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char ch)
{
	if((ch>=33) && (ch<=42))
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

	printf("Enter the division:");
	scanf("%c",&cvalue);

	bret=Bool(cvalue);

	if(bret==YES)
	{
		printf("It is a special character.");
	}
	else 
	{
		printf("It is not a special character.");
	}

	return(0);

	return(0);
}




