/* Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function). 
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input:	str1:“Marvellous Infosystems”
	str2:“Marvellous Logic Building”
	No.:10
Output: YES

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(char *src,char *dest,int icnt)
{
	if(icnt<0)
	{
		icnt=-icnt;
	}

	if((src==NULL) || (dest==NULL))
	{
		return(NO);
	}

	while((*src!='\0') && (icnt!=0))
	{
		if(*src!=*dest)
		{
			break;
		}

		src++;
		dest++;
		icnt--;
	}

	if(icnt==0)
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
	int ivalue=0;
	BOOL bret=NO;

	printf("Enter the 1st string:\n");
	scanf(" %[^'\n']s",arr);

	printf("Enter the 2nd string:\n");
	scanf(" %[^'\n']s",brr);

	printf("Enter the no.:\n");
	scanf(" %d",&ivalue);

	bret=Bool(arr,brr,ivalue);

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



