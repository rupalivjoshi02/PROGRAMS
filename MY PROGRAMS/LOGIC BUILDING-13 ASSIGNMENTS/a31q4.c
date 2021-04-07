/* Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.

Input:	"Marvellous Python 2"
Output:	marvellous python 2

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
		if((*src>='A') && (*src<='Z'))
		{
			*src=*src+32;
		}

		*dest=*src;

		src++;
		dest++;
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
