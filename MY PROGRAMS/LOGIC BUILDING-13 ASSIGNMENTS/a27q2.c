/* Write a program which accept string from user and count number of small characters.

Input:	"Marvellous"
Output:	9

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
		if((*str>='a') && (*str<='z'))
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

	printf("Count of small character in string is %d",iret);

	return(0);
}
