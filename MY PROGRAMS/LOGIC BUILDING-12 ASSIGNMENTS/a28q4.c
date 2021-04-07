/* Write a program which accept string from user and display only digits from that string.

Input:“marve89llous121”
Output:89121

*/



#include<stdio.h>
 
void Str(char *str)
{
	if(str==NULL)
	{
		return;
	}

	while(*str!='\0')
	{
		if((*str>='0') && (*str<='9'))
		{
			printf("%c",*str);
		}

		str++;
	}
}

int main()
{
	char arr[100];
	
	printf("Enter the string:");
	scanf("%s",arr);

	Str(arr);

	return(0);
}

