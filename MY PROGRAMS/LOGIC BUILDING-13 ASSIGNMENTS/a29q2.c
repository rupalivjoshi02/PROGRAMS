/*Write a program which accept string from user and accept one character. Return frequency of that character.

Input:	"Marvellous Multi OS"
	character:M
Output:	2

Input:	"Marvellous Multi OS"
	character:W
Output:	0

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
			icnt++;
		}

		str++;
	}

	return(icnt);
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

	printf("Count of that character in string is %d",iret);

	return(0);
}
