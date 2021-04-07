/* Write a program which accept string from user count number of words from string.

Input:	“Marvellous Multi OS”
Output:	3

Input:	“ Marvellous Multi OS Pune”
Output:	4
	
*/




#include<stdio.h>
#include<string.h>

int Wordcount(char *str)
{
	int icnt=1;

	if(str==NULL)
	{
		return(0);
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

	printf("Enter the string:");
	scanf("%[^'\n']s ",arr);

	iret=Wordcount(arr);

	printf("Word count is %d",iret);

	return(0);
}


