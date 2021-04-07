/* Write a program which accept string from user and print below pattern.

Input: 	Marvellous
Output:	M
	M a 
	M a r  
	M a r v  
	M a r v e 
	M a r v e l 
	M a r v e l l 
	M a r v e l l o 
	M a r v e l l o u 
	M a r v e l l o u s

Input:	PPA
Output: P 
	P P 
	P P A

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
		for(j=icnt;j>0;j--)
		{
			if(i>=j)
			{
				printf("%c ",*src);

				src++;
			}
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
