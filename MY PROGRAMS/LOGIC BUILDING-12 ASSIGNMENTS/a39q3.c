/* Write a program which accept two strings from user and check whether both the strings are equal or not without considering its case.

Input:	“MarvelloUS”
	“MARveLLous”
Output:	TRUE

*/





#include<stdio.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

void Strsmall(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}
	
	while(*str1!='\0')
	{
		if((*str1>='a') && (*str1<='z'))
		{
			*str1=*str1-32;
		}

		str1++;
	}
	
	while(*str2!='\0')
	{
		if((*str2>='a') && (*str2<='z'))
		{
			*str2=*str2-32;
		}

		str2++;
	}
}

BOOL Strequal(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return(NO);
	}

	while((*str1!='\0') && (*str2!='\0'))
	{
		if(*str1!=*str2)
		{
			break;
		}

		str1++;
		str2++;
	}

	if(*str1==*str2)
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
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	BOOL bret=NO;

	printf("Enter 1st string:");
	scanf("%[^\n]",arr);

	printf("Enter 2nd string:");
	scanf(" %[^\n]",brr);

	Strsmall(arr,brr);

	bret=Strequal(arr,brr);

	if(bret==YES)
	{
		printf("Both strings are equal");
	}
	else
	{
		printf("Both strings are not equal");
	}

	return(0);
}

