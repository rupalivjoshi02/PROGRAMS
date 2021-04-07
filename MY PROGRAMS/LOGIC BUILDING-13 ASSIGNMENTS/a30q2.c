/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function).

   Note : If third parameter is greater than the size of source string then copy whole string into destination.

Input:	"Marvellous Multi OS"
	No.:10
Output:	Marvellous

*/





#include<stdio.h>
#include<string.h>

void Display(char *src,char *dest,int icnt)
{
	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	if(icnt<0)
	{
		icnt=-icnt;
	}

	while((*src!='\0') && (icnt!=0))
	{
		*dest=*src;

		src++;
		dest++;
		icnt--;
	}

	*dest='\0';
}

int main()
{
	char arr[100]={'\0'},brr[100]={'\0'};
	int ivalue=0;

	printf("Enter the 1st string:");	
	scanf(" %[^'\n']s",arr);

	printf("enter the no.:");
	scanf(" %d",&ivalue);

	Display(arr,brr,ivalue);

	printf("Copied string is %s",brr);

	return(0);
}
