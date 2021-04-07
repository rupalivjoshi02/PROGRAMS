/* Write a recursive program which accept string from user and count number of characters.

Input:	Hello
Output:	5

*/




#include<stdio.h>

int ReturnR(char *str)
{
	static int icnt=0;

	if(str==NULL)
	{
		return(-1);
	}
	
	if(*str!='\0')
	{
		icnt++;
		str++;

		ReturnR(str);
	}

	return(icnt);
}

int main()
{
	int iret=0;
	char arr[100]={'\0'};
	
	printf("\nInside main fun.\n");

	printf("\nEnter the string: \n");
	scanf("%[^\n]",arr);

	iret=ReturnR(arr);

	printf("\nFreq. of character in the given string is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
