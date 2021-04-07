/* Write a program which accept string from user and copy the contents into another string by removing extra white spaces.

Input: “Marvel lous multi OS”
Output: Marvellous Multi OS

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		while(*src==' ')
		{
			src++;
		}

		*dest=*src;

		dest++;
		src++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]={'\0'},brr[100]={'\0'};

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	Display(arr,brr);

	printf("Modified string is %s",brr);

	return(0);
}
