/* Write a program which accept string from user and check whether it contains vowels in it or not.

Input:	"marvellous"
Output:	YES

Input:	"Demo"
Output:	YES

Input:	"xyz"
Output:	NO

*/





#include<stdio.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char *str)
{
	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
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
	char arr[100]={'\0'};
	BOOL bret='\0';

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	bret=Bool(arr);

	if(bret==YES)
	{
		printf("String contain vowel.");
	}
	else 
	{
		printf("String does not contain vowel.");
	}

	return(0);
}
