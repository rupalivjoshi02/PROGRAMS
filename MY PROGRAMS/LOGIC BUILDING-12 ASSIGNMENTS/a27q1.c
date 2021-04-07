/* Write a program which accept string from user and count number of capital characters.

Input:“Marvellous Multi OS”
Output:4

*/

#include<stdio.h>

int Str(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}

/*
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
*/

	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	iret=Str(arr);

	printf("Capital character count is %d",iret);

	return(0);
}

