/* Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”

*/



#include<stdio.h>

void Str(char *src,char *dest)
{
	if((src==NULL) && (dest==NULL))
	{
		return;
	}

/*
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*src=*src-32;
		}

		*dest=*src;

		src++;
		dest++;
	}

	*dest='\0';
*/

	while(*src!='\0')
	{
		if((*src>=97) && (*src<=122))
		{
			*src=*src-32;
		}

		*dest=*src;

		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Python 2";
	char brr[100]={'\0'};

	Str(arr,brr);

	printf("New string is\n %s",brr);

	return(0);
}





