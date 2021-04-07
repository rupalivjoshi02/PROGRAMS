/* Write a program which accept string from user reverse that string in place.

Input:“abcd”
Output:“dcba”

Input:“abba”
Output:“abba”

*/


#include<stdio.h>

void Str(char *str)
{
	char temp='\0';
	char *start=NULL,*end=NULL;

	if(str==NULL)
	{
		return;
	}

	start=str;
	end=str;

	while(*end!='\0')
	{
		end++;
	}

	end--;

	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:");
	scanf("%[^\n]",arr);

	Str(arr);

	printf("Reversed string is %s",arr);

	return(0);
}


