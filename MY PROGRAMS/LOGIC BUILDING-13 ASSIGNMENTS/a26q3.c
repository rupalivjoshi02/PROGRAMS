/* Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

Input:	Q
Output:	Q R S T U V W X Y Z

Input:	m
Output:	m l k j i h g f e d c b a

Input:	8
Output:	Invalid input.

*/




#include<stdio.h>

void Display(char ch)
{
	char c='\0';

	if((ch>='A') && (ch<='Z'))
	{
		for(c=ch;c<='Z';c++)
		{
			printf("%c ",c);
		}
	}
	else if((ch>='a') && (ch<='z'))
	{
		for(c=ch;c>='a';c--)
		{
			printf("%c ",c);
		}
	}
	else 
	{
		printf("Invalid input.");
	}
}

int main()
{
	char cvalue='\0';

	printf("Enter the division:");
	scanf("%c",&cvalue);

	Display(cvalue);

	return(0);
}




