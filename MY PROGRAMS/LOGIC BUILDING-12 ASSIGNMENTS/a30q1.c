/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function).

Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS”

*/


#include<stdio.h>

void Strcpy(char *src,char *dest)
{
	if((src==NULL) && (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		*dest=*src;

		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Multi OS";
	char brr[100];

	Strcpy(arr,brr);

	printf("Copied string is %s",arr);

	return(0);
}


