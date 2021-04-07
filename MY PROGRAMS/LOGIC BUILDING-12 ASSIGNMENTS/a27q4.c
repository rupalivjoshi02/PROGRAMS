/* Write a program which accept string from user and check whether it contains vowels in it or not.

Input:“Marvellous”
Output:YES

Input:“DEMO”
Output:YES

Input:“xyz”
Output:NO

*/


#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Str(char *str)
{
	int flag=0;

	if(str==NULL)
	{
		return(-1);
	}

/*
	while(*str!='\0')
	{
		if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
		{
			flag=1;

			break;
		}

		str++;
	}

	if(flag==1)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
*/

	while(*str!='\0')
	{
		if((*str==97) || (*str==101) || (*str==105) || (*str==111) || (*str==117) || (*str==65) || (*str==69) || (*str==73) || (*str==79) || (*str==85))
		{
			flag=1;

			break;
		}

		str++;
	}

	if(flag==1)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}

int main()
{
	char arr[100]={'\0'};
	BOOL bret=NO;

	printf("Enter string:");
	scanf("%s",arr);

	bret=Str(arr);

	if(bret==YES)
	{
		printf("String contains vowels");
	}
	else
	{
		printf("String does not contains vowels");
	}

	return(0);
}

