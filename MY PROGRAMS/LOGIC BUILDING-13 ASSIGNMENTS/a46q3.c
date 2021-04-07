/*	3. Write a recursive program which accept string from user and count number of characters.
	
	Input:	Hello
	Output:	5	*/




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
	char arr[10]={'\0'};

	printf("\nEnter the string: \n");
	scanf(" %[^'\n']",arr);

	iret=ReturnR(arr);

	printf("\nCount of characters in the given string  is %d\n",iret);

	return(0);
}
