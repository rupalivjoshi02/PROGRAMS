/* Write a program which accept string from user and count number of capital characters.

Input:	"Marvellous Multi OS"
Output:	4

*/





#include<stdio.h>
#include<string.h>

int Return(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
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

	printf("Count of capital character in string is %d",iret);

	return(0);
}
