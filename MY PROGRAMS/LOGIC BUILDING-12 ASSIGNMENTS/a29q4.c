/* Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

Input:“Marvellous Multi OS”
	Characetr:M
Output:11

Input:“Marvellous Multi OS”
	Characetr:w
Output:-1

Input:“Marvellous Multi OS”
	Characetr:e
Output:4

*/



#include<stdio.h>

int Str(char *src,char ch)
{	
	int icnt=0;

	if(src==NULL)
	{
		return(-1);
	}

	while(*src!='\0')
	{
		icnt++;
		src++;		
	}

	icnt--;
	src--;

	while(icnt>0)
	{
		if(*src==ch)
		{
			break;
		}

		src--;
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
	char arr[20];
	char cvalue='\0';
	int iret=0;

	printf("Enter the string:");	
	scanf("%[^\n]",arr);	

	printf("Enter the character:");
	scanf(" %c",&cvalue);
	
	iret=Str(arr,cvalue);

	printf("Last occurence is at %d position",iret);
	
	return(0);
}




