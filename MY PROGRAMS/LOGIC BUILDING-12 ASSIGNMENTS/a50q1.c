/* Write a recursive program which accept string from user and count white paces.

Input:	HE llO WOr lD
Output:	3

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
		if(*str==' ')
		{
			icnt++;
		}

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

	printf("\nNo. of white spaces are  %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
