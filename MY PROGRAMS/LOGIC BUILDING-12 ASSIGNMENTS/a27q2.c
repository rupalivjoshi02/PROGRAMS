/* Write a program which accept string from user and count number of small characters.

Input:“Marvellous Multi OS”
Output:13

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
		if((*str>='a') && (*str<='z'))
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
*/

	while(*str!='\0')
	{
		if((*str>=97) && (*str<=122))
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
	scanf("%[^'\n']s",arr);

	iret=Str(arr);

	printf("Small character count is %d",iret);

	return(0);
}


