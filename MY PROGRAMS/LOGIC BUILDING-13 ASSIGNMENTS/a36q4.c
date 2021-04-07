/* Accept sing from user and reverse the contents of that string by toggling the case.

Input:	“aCBdef”
Output: FEDbcA

*/




#include<stdio.h>
#include<stdlib.h>
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
		temp=*src;
		*src=*dest;
		*dest=temp;

		src++;
		dest--;
	}

	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}

		str++;
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	Display(arr);

	printf("Reversed string is %s",arr);

	return(0);
}



