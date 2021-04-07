/* Write a program which accept string from user and replace each occurrence of first character of each word into capital case.

Input: “marvellous infosystems by Piyush khairnar”
Output: “Marvellous Infosystems By Piyush Khairnar”

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(char *str)
{
	if(str==NULL)
	{
		return;
	}

	if((*str>='a') && (*str<='z'))
	{
		*str=*str-32;
	}

	while(*str!='\0')
	{
		str++;

		if((*str==' ') || (*str=='\0'))
		{
			str++;

			if((*str>='a') && (*str<='z'))
			{
				*str=*str-32;
			}
		}
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	Display(arr);

	printf("Modified string is %s",arr);

	return(0);
}
