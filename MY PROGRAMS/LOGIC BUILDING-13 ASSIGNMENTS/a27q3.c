/* Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input:	"MarvellouS"
Output:	6 (8-2)

*/





#include<stdio.h>
#include<string.h>

int Return(char *str)
{
	int icnt1=0,icnt2=0;

	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			icnt1++;
		}
		else if((*str>='A') && (*str<='Z'))
		{
			icnt2++;
		}


		str++;
	}

	return(icnt1-icnt2);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	printf("Enter the string:");	
	scanf(" %[^'\n']s",arr);

	iret=Return(arr);

	printf("Difference is %d",iret);

	return(0);
}
