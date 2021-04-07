/* Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input:“Marvellous Multi OS”
Output:9 (13-4)

*/



#include<stdio.h>

int Str(char *str)
{
	int icnt=0,icapital=0,ismall=0,idiff=0;

	if(str==NULL)
	{
		return(-1);
	}

/*
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			icapital++;
		}
		else if((*str>='a') && (*str<='z'))
		{
			ismall++;
		}

		str++;
	}

	idiff=ismall-icapital;

	return(idiff);
*/

	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			icapital++;
		}
		else if((*str>=97) && (*str<=122))
		{
			ismall++;
		}

		str++;
	}

	idiff=ismall-icapital;

	return(idiff);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	iret=Str(arr);

	printf("Differnce is %d",iret);

	return(0);
}




