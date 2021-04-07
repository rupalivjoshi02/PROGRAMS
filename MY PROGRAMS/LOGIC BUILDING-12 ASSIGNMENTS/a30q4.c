/* Write a program which accept string from user and copy small characters of that string into another string.

Input:“Marvellous Multi OS”
Output:arvellous ulti

*/



#include<stdio.h>

void Str(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return;	
	}

	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*dest=*src;

			dest++;
		}

		src++;
	}

	*dest='\0';


/*
	while(*src!='\0')
	{
		if((*src>=97) && (*src<=122))
		{
			*dest=*src;

			dest++;
		}

		src++;
	}

	*dest='\0';
*/
}

int main()
{
	char arr[100]="Marvellous Multi OS";
	char brr[100]={'\0'};

	Str(arr,brr);

	printf("After copied small character in string is\n %s",brr);

	return(0);
}

