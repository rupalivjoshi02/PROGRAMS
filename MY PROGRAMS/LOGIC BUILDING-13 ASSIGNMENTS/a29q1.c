/* Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input:	"Marvellous Multi OS"
	character:e
Output:	YES

Input:	"Marvellous Multi OS"
	character:W
Output:	NO

*/





#include<stdio.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char *str,char ch)
{
	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}

		str++;
	}

	if(*str=='\0')
	{
		return(NO);
	}
	else
	{
		return(YES);
	}
}

int main()
{
	char arr[100]={'\0'},cvalue='\0';
	BOOL bret=NO;

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	printf("Enter the character:");
	scanf(" %c",&cvalue);

	bret=Bool(arr,cvalue);

	if(bret==YES)
	{
		printf("Character present in string.");
	}
	else
	{
		printf("Character is not present string.");
	}

	return(0);

	return(0);
}
