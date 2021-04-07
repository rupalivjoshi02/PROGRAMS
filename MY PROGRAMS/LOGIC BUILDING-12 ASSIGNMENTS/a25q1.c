/* 1. Accept Character from user and check whether it is alphabet or not (A-Z a-z).

Input :F
Output : TRUE

Input :&
Output : FALSE

*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Str(char ch)
{
/*	
	if(((ch>=97) && (ch<=122)) || ((ch>=65) && (ch<=90)))
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}
*/

	if(((ch>='a') && (ch<='z')) || ((ch>='A') && (ch<='Z')))
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}
}

int main()
{
	char cvalue='\0';
	BOOL bret=FALSE;

	printf("Enter the character:");
	scanf("%c",&cvalue);

	bret=Str(cvalue);

	if(bret==TRUE)
	{
		printf("It is a character");
	}
	else
	{
		printf("It is not a character");
	}

	return(0);
}

