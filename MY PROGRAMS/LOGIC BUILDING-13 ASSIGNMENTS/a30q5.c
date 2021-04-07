/* Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).

Input:	"Marvellous Infosystems"
	"Logic Building"
Output:	Marvellous Infosystems Logic Building

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
		src++;
	}

	while(*dest!='\0')
	{
		*src=*dest;

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

	printf("Enter the 2nd string:");	
	scanf(" %[^'\n']s",brr);

	Display(arr,brr);

	printf("Concatenated string is %s",arr);

	return(0);
}
