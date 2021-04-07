/* Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function).

Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input:	str1:“Marvellous Infosystems”
	str2:“Logic Building”
	No.:5
Output: Marvellous Infosystems Logic

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(char *src,char *dest,int icnt)
{
	if(icnt<0)
	{
		icnt=-icnt;
	}

	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		src++;
	}

	while((*dest!='\0') && (icnt!=0))
	{
		*src=*dest;

		src++;
		dest++;
		icnt--;
	}

	*src='\0';
}

int main()
{
	char arr[100]={'\0'},brr[100]={'\0'};
	int ivalue=0;

	printf("Enter the 1st string:\n");
	scanf(" %[^'\n']s",arr);

	printf("Enter the 2nd string:\n");
	scanf(" %[^'\n']s",brr);

	printf("Enter the no.:\n");
	scanf(" %d",&ivalue);

	Display(arr,brr,ivalue);

	printf("Concatenated string is %s",arr);

	return(0);
}



