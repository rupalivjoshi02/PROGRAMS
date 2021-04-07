/* Write a program which accept string from user and copy capital characters of that string into another string.

Input:“Marvellous Multi OS”
Output:MMOS

*/



#include<stdio.h>

void Str(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return;	
	}

/*
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			*dest=*src;

			dest++;
		}

		src++;
	}

	*dest='\0';
*/

	while(*src!='\0')
	{
		if((*src>=65) && (*src<=90))
		{
			*dest=*src;

			dest++;
		}

		src++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Multi OS";
	char brr[100]={'\0'};

	Str(arr,brr);

	printf("After copied capital character in string is\n %s",brr);

	return(0);
}


