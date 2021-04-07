/* Write a program which accept string from user and count number of white spaces.

Input:“Marvellous”
Output:0

Input:“Marvellous Infosystem”
Output:1

Input:“Marvellous Infosystem by Piyush Manohar Khairnar”
Output:5

*/



#include<stdio.h>

int Str(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}

/*
	while(*str!='\0')
	{
		if(*str==' ')
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
*/

	while(*str!='\0')
	{
		if(*str==32)
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
}

int main()
{
	char arr[100];
	int iret=0;
	
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	iret=Str(arr);

	printf("White spaces's count is %d",iret);

	return(0);
}






