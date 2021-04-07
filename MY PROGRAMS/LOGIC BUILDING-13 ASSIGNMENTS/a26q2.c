/* Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.

Input:	Q
Output:	q

Input:	m
Output:	M

Input:	8
Output:	8

*/




#include<stdio.h>

void Display(char ch)
{
	char c='\0';

	if((ch>='A') && (ch<='Z'))
	{
		c=ch+32;

		printf("%c",c);
	}
	else if((ch>='a') && (ch<='z'))
	{
		c=ch-32;

		printf("%c ",c);
	}
	else 
	{
		printf("%c ",ch);
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




