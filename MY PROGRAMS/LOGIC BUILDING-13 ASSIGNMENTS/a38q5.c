/* Write a program which accept string from user and print below pattern.

Input: 	Marvellous
Output:	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s
	m a r v e l l o u s

Input:	PPA
Output: p p a
	p p a
	p p a

*/




#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Display(char *str)
{
	int i=0,j=0,icnt=0;
	char *dest=NULL,*src=NULL;

	if(str==NULL)
	{
		return;
	}

	src=str;
	dest=str;

	while(*dest!='\0')
	{
		dest++;
		icnt++;
	}
	
	for(i=1;i<=icnt;i++)
	{
		for(j=1;j<=icnt;j++)
		{
			if((*src>='A') && (*src<='Z'))
			{
				*src=*src+32;
			}

			printf("%c ",*src);

			src++;
		}

		printf("\n");

		src=str;
	}
}

int main()
{
	char arr[100]={'\0'};

	printf("Enter the string:");
	scanf(" %[^'\n']s",arr);

	Display(arr);

	return(0);
}
