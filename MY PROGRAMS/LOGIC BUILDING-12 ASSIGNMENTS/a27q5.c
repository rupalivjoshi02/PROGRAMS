/* Write a program which accept string from user and display it in reverse order.

Input:“Marvellous”
Output:suollevraM

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
	char arr[100];
	
	printf("Enter the string:");
	scanf("%s",arr);

	Str(arr);

	printf("Reversed string is %s",arr);

	return(0);
}

