/* Write a program which accept string from user and count number of white spaces

Input:	"MarvellouS"
Output:	0

Input:	"MarvellouS Infosystems"
Output:	1

Input:	"MarvellouS Infosystem by Piyush Manohar Khairnar"
Output:	5

*/





#include<stdio.h>
#include<string.h>

int Return(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		if(*str==' ')
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
	scanf(" %[^'\n']s",arr);

	iret=Return(arr);

	printf("Count of White spaces in string is %d",iret);

	return(0);
}
