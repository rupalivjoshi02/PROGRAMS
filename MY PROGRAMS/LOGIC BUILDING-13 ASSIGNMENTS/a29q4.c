/* Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

Input:	"Marvellous Multi OS"
	character:M
Output:	11

Input:	"Marvellous Multi OS"
	character:W
Output:	-1

Input:	"Marvellous Multi OS"
	character:e
Output:	4

*/





#include<stdio.h>
#include<string.h>

int Return(char *str,char ch)
{
	int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		icnt++;
		str++;
	}

	str--;
	icnt--;

	while(icnt>0)
	{
		if(*str==ch)
		{
			break;
		}

		str--;
		icnt--;
	}

	if(icnt==0)
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
	char arr[100]={'\0'};
	char cvalue='\0';
	int iret=0;

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	printf("Enter the character:");
	scanf(" %c",&cvalue);

	iret=Return(arr,cvalue);

	printf("Last occurance of that character in string is %d",iret);

	return(0);
}
