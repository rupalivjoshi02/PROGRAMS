/* Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input:	"Marvellous Multi OS"
	character:M
Output:	0

Input:	"Marvellous Multi OS"
	character:W
Output:	-1

Input:	"Marvellous Multi OS"
	character:e
Output:	4

*/





#include<stdio.h>
#include<string.h>

int Return(char *str,char ch)
{
	int icnt=0;

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
		icnt++;
	}

	if(*str!='\0')
	{
		return(icnt);
	}
	else 
	{
		return(-1);
	}
}

int main()
{
	char arr[100]={'\0'},cvalue='\0';
	int iret=0;

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	printf("Enter the character:");
	scanf(" %c",&cvalue);

	iret=Return(arr,cvalue);

	printf("First occurance of that character in string is %d",iret);

	return(0);
}
