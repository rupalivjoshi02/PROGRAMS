/* Write a program which accept string from user and toggle the case.

Input:“Marvellous Multi OS”
Output:mARVELLOUS mULTI os

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
		if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		
		str++;
	}
*/

	while(*str!='\0')
	{
		if((*str>=97) && (*str<=122))
		{
			*str=*str-32;
		}
		else if((*str>=65) && (*str<=90))
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

	printf("Toggled string is %s",arr);

	return(0);
}
