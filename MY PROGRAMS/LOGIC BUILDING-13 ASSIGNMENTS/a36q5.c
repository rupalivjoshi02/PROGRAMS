/* Accept string from user and check whether the string is palindrome or not without considering its case.

Input:	“1abccBA1”
Output: YES

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

void Small(char *str)
{
	if(str==NULL)
	{
		return;
	}

	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}

		str++;
	}
}

BOOL Bool(char *str)
{
	char *src=NULL,*dest=NULL;

	if(str==NULL)
	{
		return(NO);
	}

	src=str;
	dest=str;

	while(*dest!='\0')
	{
		dest++;
	}

	dest--;

	while(src<dest)
	{
		if(*src!=*dest)
		{
			break;
		}	

		src++;
		dest--;
	}

	if(src<dest)
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
	BOOL bret=NO;

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	Small(arr);

	bret=Bool(arr);

	if(bret==YES)
	{
		printf("String is palindrome.");
	}
	else 
	{
		printf("String is not palindrome.");
	}

	return(0);
}



