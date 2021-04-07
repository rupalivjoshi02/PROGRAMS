/* Accept sing from user and reverse the contents of that string by toggling the case.

Input:	“aCBdef”
Output:	“FEDcbA”
	
*/




#include<stdio.h>

void Reverse(char *str)
{
	char *src=NULL,*dest=NULL;
	char temp='\0';

	if(str==NULL)
	{
		return;
	}

	src=str;
	dest=str;

	while(*src!='\0')
	{
		src++;
	}

	src--;

	while(dest<src)
	{
		temp=*dest;
		*dest=*src;
		*src=temp;

		dest++;
		src--;	
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
	char arr[1000]={'\0'};
	
	printf("Enter the string:");
	scanf("%[^\n]s",arr);

	Reverse(arr);

	printf("%s",arr);

	return 0;
}

