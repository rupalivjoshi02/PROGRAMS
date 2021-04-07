/* Write a program which accept two strings from user and display length of both the strings.

Input:	"Marvellous"
	"Infosystems"
Output:	10 11

*/




#include<stdio.h>
#include<string.h>

void Str(char *str1,char *str2)
{
	int icnt1=0,icnt2=0;

	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		icnt1++;
		str1++;
	}

	printf("%d\n",icnt1);

	while(*str2!='\0')
	{
		icnt2++;
		str2++;
	}

	printf("%d\n",icnt2);
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'Write a program which number from user and display below pattern.};
	int iret=0;

	printf("Enter the 1st string:");
	scanf("%[^\n]",arr);

	printf("Enter the 2nd string:");
	scanf(" %[^\n]",brr);

	Str(arr,brr);

	return(0);
}

