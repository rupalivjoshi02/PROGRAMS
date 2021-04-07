/* Write a program which accept string from user count number of words from string

Input: "Marvellous Multi OS"
Output: 3

Input: "MarvellousMulti OS Pune"
Output: 4

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Return(char *str)
{
	int icnt=1;

	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		if((*str==' ') || (*str=='\n') || (*str=='\t'))
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

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	iret=Return(arr);

	printf("Total no. of words are %d",iret);

	return(0);
}
