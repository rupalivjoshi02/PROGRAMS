/* Write a program which accept string from user and accept one character. Return frequency of that character.

Input:“Marvellous Multi OS”
	Character: M
Output:2

Input:“Marvellous Multi OS”
	Character: w
Output:0

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
			icnt++;
		}

		str++;
	}

	return(icnt);
}

int main()
{
	char arr[100];
	char cvalue='\0';
	int iret=0;
	
	printf("Enter the string:");
	scanf("%[^\n]",arr);

	printf("Enter the charcter:");
	scanf(" %c",&cvalue);
	
	iret=Str(arr,cvalue); 

	printf("Character counter is %d",iret);

	return(0);
}

