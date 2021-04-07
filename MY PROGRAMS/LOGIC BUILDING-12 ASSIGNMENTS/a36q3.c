/* Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function).

Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input:	"Marvellous Infosystem"
	"Marvellous Logic Building"
	No.:10
Output:	YES
	
*/





#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Compare(char *src,char *dest,int ino)
{
	if((src==NULL) || (dest==NULL))
	{
		return(NO);
	}

	while((*src!='\0') && (*dest!='\0') && (ino!=0))
	{
		if(*src!=*dest)
		{
			break;
		}

		src++;
		dest++;
		ino--;
	}

	if((ino==0) || (*dest=='\0'))
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
	char brr[100]="Marvellous Logic Building";
	int ivalue=10;
	BOOL bret=NO;	

	bret=Compare(arr,brr,ivalue);

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


