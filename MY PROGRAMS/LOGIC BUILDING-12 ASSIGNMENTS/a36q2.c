/* Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function).

Input:	"Marvellous Infosystem"
	"Marvellous Infosystem"
Output:	YES

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Compare(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return(NO);
	}

	while((*src!='\0') && (*dest!='\0'))
	{
		if(*src==*dest)
		{
			src++;
			dest++;
		}
	}

	if((*src=='\0') && (*dest=='\0'))
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
	char arr[100]="Marvellous Infosystem";
	char brr[100]="Marvellous Infosystem";
	BOOL bret=NO;

	bret=Compare(arr,brr);

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


