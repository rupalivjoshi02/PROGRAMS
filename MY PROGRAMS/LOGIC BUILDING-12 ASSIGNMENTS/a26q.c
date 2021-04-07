/* Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

Input:%
Output:YES

Input:d
Output:NO

Input:4
Output:NO

*/


#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Character(char ch)
{
	if(((ch>=33) && (ch<=47)) || ((ch>=58) && (ch<=63)) || ((ch>=91) && (ch<=94)) || ((ch>=123) && (ch<=127)))
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

	bret=Character(cvalue);

	if(bret==YES)
	{
		printf("It is a special character");
	}
	else
	{
		printf("It is not a special character");
	}

	return(0);
}


