/* Write a program which accept string from user and replace each occurrence of first character of each word into capital case.

Input:"marvellous infosystem by Piyush Khairnar"
Output:"Marvellous Infosystem By Piyush Khairnar"

*/




#include<stdio.h>

void Str(char *str)
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
	char arr[100]="marvellous infosystem by Piyush Khairnar";

	Str(arr);

	printf("%s",arr);

	return(0);

}

