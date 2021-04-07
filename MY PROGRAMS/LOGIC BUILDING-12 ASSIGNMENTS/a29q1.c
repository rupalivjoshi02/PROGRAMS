/* Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input :“Marvellous Multi OS”
	Character:e
Output:YES

Input :“Marvellous Multi OS”
	Character:w
Output:NO

*/


#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Str(char *str,char ch)
{

/*
	if(str==NULL)
	{
		return(NO);
	}

	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}
		
		str++;
	}

	if(*str!='\0')
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
*/	
	
	int flag=0;
	
	if(str==NULL)
	{
		return(NO);
	}

	while(*str!='\0')
	{
		if(*str==ch)
		{
			flag=1;

			break;
		}
		
		str++;
	}

	if(flag==0)
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
	char arr[100];
	char cvalue='\0';
	BOOL bret=NO;

	printf("Enter thye string:");
	scanf("%[^\n]",arr);

	printf("Enter the character:");
	scanf(" %c",&cvalue);

	bret=Str(arr,cvalue);

	if(bret==YES)
	{
		printf("Character is present in string");
	}
	else
	{
		printf("Character is not present in string");
	}

	return(0);
}


