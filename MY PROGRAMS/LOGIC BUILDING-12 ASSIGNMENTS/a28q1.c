/* Write a program which accept string from user and convert it into lower case.

Input:“Marvellous Multi OS”
Output:marvellous multi os

*/



#include<stdio.h>

void Str(char *str)
{
	if(str==NULL)
	{
		return;
	}

/*
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}

		str++;
	}
*/

	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			*str=*str+32;
		}

		str++;
	}
}

int main()
{
	char arr[100];
	
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	Str(arr);

	printf("Converted string is %s",arr);

	return(0);
}

