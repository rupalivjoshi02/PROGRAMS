/*  Write a program which accept string from user and reverse each word in place.

Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO”	
		
*/




#include<stdio.h>

void Reverse(char *str)
{
	char *src=NULL;
	char *dest=NULL;

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

	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	Reverse(arr);

	return(0);
}
