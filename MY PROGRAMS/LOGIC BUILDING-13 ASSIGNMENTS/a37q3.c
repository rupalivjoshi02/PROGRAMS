/* Write a program which accept string from user and reverse each word in place.

Input: “Marvellous Multi OS”
Output: suollevraM itluM SO

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(char *str)
{
	char *src=NULL,*dest=NULL;

	if(str==NULL)
	{
		return;
	}

	src=str;
	dest=str;

	while(*str!='\0')
	{
		str++;

		if((*str==' ') || (*str=='\0'))
		{
			dest=str;

			dest--;

			printf(" ");

			while(src<=dest)
			{
				printf("%c",*dest);

				dest--;
			}

			str++;

			src=str;
		}
	}	
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	Display(arr);

	return(0);
}
