/* Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input:“Marvellous Multi OS”
	Characetr:M
Output:0

Input:“Marvellous Multi OS”
	Characetr:w
Output:-1

Input:“Marvellous Multi OS”
	Characetr:e
Output:4

*/

#include<stdio.h>

int Str(char *str,char ch)
{
	int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}

		str++;
		icnt++;
	}

	if(*str=='\0')
	{
		return(-1);
	}
	else
	{
		return(icnt);
	}
}

int main()
{
	char arr[20];
	char cvalue='\0';
	int iret=0;

	printf("Enter the string:");	
	scanf("%[^\n]",arr);	

	printf("Enter the character:");
	scanf(" %c",&cvalue);
	
	iret=Str(arr,cvalue);

	printf("First occurence is at %d position",iret);
	
	return(0);
}





