/* Write a program which accept string from user and copy small characters of that string into another string.

Input:	"Marvellous Multi OS"
Output:	arvellous ulti

*/





#include<stdio.h>
#include<string.h>

void Display(char *src,char *dest)
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
}

int main()
{
	char arr[100]={'\0'},brr[100]={'\0'};

	printf("Enter the 1st string:");	
	scanf(" %[^'\n']s",arr);

	Display(arr,brr);

	printf("Copied string is %s",brr);

	return(0);
}
