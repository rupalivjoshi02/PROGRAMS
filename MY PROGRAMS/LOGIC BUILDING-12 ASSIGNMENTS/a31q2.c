/* Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

Input:“Marvel lous Pyth on”
Output:“MarvellousPython”

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
		if(*src==32)
		{
			src=src+1;
		}

		*dest=*src;
		
		src++;
		dest++;
	}

	*dest='\0';
*/
	
	while(*src!='\0')
	{
		if(*src==' ')
		{
			src=src+1;
		}

		*dest=*src;
		
		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvel lous Pyth on";
	char brr[100]={'\0'};

	Str(arr,brr);

	printf("New string is\n %s",brr);

	return(0);
}










