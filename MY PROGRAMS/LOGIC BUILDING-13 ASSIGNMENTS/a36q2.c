/* Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function).

Input:	str1:“Marvellous Infosystems”
	str2:“Marvellous Infosystems”
Output: YES

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return(NO);
	}

	while((*src!='\0') && (*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}

		src++;
		dest++;
	}

	if(*src==*dest)
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
	char arr[100]={'\0'},brr[100]={'\0'};
	BOOL bret=NO;

	printf("Enter the 1st string:\n");
	scanf(" %[^'\n']s",arr);

	printf("Enter the 2nd string:\n");
	scanf(" %[^'\n']s",brr);

	bret=Bool(arr,brr);

	if(bret==YES)
	{
		printf("Both strings are equal.");
	}
	else
	{
		printf("Both strings are not equal.");
	}

	return(0);
}



