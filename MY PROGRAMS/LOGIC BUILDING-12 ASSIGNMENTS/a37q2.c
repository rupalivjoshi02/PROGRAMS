/* Write a program which accept string from user and return length of largest word.
	
Input : “Marvellous Multi OS Infosystems”
Output : 11		
		
*/




#include<stdio.h>
#include<string.h>

int Length(char *str)
{	
	int imax=0,icnt=0;

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
	
	printf("Enter the string:");
	scanf("%[^'\n']s",arr);
	
	iret=Length(arr);

	printf("Maximun length of word is %d",iret);

	return 0;
}
