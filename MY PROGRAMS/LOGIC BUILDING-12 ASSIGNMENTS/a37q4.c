/* Write a program which accept string from user and copy the contents into another string by removing extra white spaces.

Input:"Marvel lous Multi OS"
Output:"Marvellous Multi OS"

*/




#include<stdio.h>

void Space(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return;	
	}

	while(*src!='\0')
	{
		while(*src==' ')
		{
			src++;
		}

		*dest=*src;

		dest++;
		src++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvel lous Multi OS";
	char brr[100]={'\0'};

	Space(arr,brr);

	printf("%s",brr);

	return(0);

}
