/* Accept string from user and check whether the string is palindrome or not without considering its case.

Input:	“1abccBA1”
Output:	YES
	
*/




#include<stdio.h>

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
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}

		str++;
	}
}

BOOL Palindrome(char *str)
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
	char arr[100];
	BOOL bret=NO;

	printf("Enter the string:");
	scanf("%[^'\n's]",arr);

	Small(arr);	
	
	bret=Palindrome(arr);

	if(bret==YES)
	{
		printf("It is palindrom");
	}
	else
	{
		printf("It is not palindrome");
	}

	return(0);
}
