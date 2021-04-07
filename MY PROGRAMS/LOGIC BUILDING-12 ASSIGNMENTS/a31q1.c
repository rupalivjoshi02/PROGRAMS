/* Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input:“Marvellous Python”
Output:“nohtyP suollevraM”

*/


#include<stdio.h>

void Str(char *src,char *dest)
{
	int icnt=0;

	if((src==NULL) && (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		icnt++;
		src++;
	}

	src--;

	while(icnt!=0)
	{
		*dest=*src;

		dest++;
		src--;
		icnt--;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Python";
	char brr[100]={'\0'};

	Str(arr,brr);

	printf("Reversed copied string is\n %s",brr);

	return(0);
}
