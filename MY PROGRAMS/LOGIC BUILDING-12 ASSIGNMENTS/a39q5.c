/* Write a program which accept two strings from user and concat second string at the end of first string in reverse order.

Input:	“MarvelloUS”
	“Python”
Output:	Marvellousnohtyp

*/




#include<stdio.h>
#include<string.h>

void Revconcat(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		str1++;
	}

	while(*str2!='\0')
	{
		*str2++;
	}

	str2--;

	while(str1<str2)
	{
		*str1=*str2;

		str1++;
		str2--;
	}

	str1='\0';
}

int main()
{	
	char arr[100]={'\0'};	
	char brr[100]={'\0'};

	printf("Enter the 1st string:");
	scanf("%[^\n]",arr);

	printf("Enter the 2nd string:");
	scanf(" %[^\n]",brr);

	Revconcat(arr,brr);

	printf("%s",arr);

	return(0);
}
