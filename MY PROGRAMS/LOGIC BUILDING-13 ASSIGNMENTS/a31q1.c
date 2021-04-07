/* Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input:	"Marvellous Python"
Output:	nohtyP suollevraM

*/





#include<stdio.h>
#include<string.h>

void Display(char *src,char *dest)
{
	int icnt=0;

	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		src++;
		icnt++;
	}

	src--;

	while(icnt!=0)
	{
		*dest=*src;

		src--;
		dest++;
		icnt--;
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
