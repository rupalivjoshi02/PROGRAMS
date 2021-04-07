/* Write a program which accept string from user and return length of largest word.

Input: “Marvellous Multi OS Infosystems”
Output: 11

*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Return(char *str)
{
	int icnt=0,imax=0;

	if(str==NULL)
	{
		return(-1);
	}

	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str==' ') && (*str!='\0'))
			{
				str++;
			}

			icnt=0;
		}	
		else
		{
			str++;
			icnt++;
		}

		if(imax<icnt)
		{
			imax=icnt;
		}
	}

	return(imax);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	printf("Enter the string:\n");
	scanf(" %[^'\n']s",arr);

	iret=Return(arr);

	printf("Largest no. is %d",iret);

	return(0);
}
