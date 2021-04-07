/* Write a program which accept string from user and convert it into upper case.

Input:	"Marvellous Multi OS"
Output:	MARVELLOUS MULTI OS

*/





#include<stdio.h>
#include<string.h>

void Display(char *str)
{
	if(str==NULL)
	{
		return;
	}

	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}

		str++;
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	Display(arr);

	printf("Modified string is %s",arr);

	return(0);
}
