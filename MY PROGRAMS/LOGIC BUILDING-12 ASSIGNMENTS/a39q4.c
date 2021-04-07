/* Write a program which accept two strings from user and concat alternate characters from second string at the end of first string.

Input:	“MarvelloUS”
	“Infosystems”
Output:	MarvellousIfsses

*/




#include<stdio.h>
#include<string.h>

void Altconcat(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{	
		str1++;	
	}

	while(*str2!='\0')
	{
		*str1=*str2;

		if(*(str2+1)=='\0')
		{
			str1++;

			break;
		}

		str2=str2+2;

		str1++;
	}

	str1='\0';
}

int main()
{	
	char arr[100]={'\0'};	
	char brr[100]={'\0'};

	printf("Enter the 1st string:");
	scanf("%[^\n]",arr);

	printf("Enter the 2nd string:");
	scanf(" %[^\n]",brr);

	Altconcat(arr,brr);

	printf("Alternate concatenated string is %s",arr);

	return(0);
}

