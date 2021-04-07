/* Write a program which accept string from user and display it inn reverse order.

Input:	"MarvellouS"
Output:	SuollevraM

*/





#include<stdio.h>
#include<string.h>

void Display(char *str)
{
	char *src=NULL,*dest=NULL;
	char temp='\0';

	if(str==NULL)
	{
		return;
	}

	src=str;
	dest=str;

	while(*dest!='\0')
	{
		dest++;
	}

	dest--;

	while(src<dest)
	{
		temp=*dest;
		*dest=*src;
		*src=temp;

		src++;
		dest--;	
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	Display(arr);

	printf("Reversed string is %s",arr);

	return(0);
}
