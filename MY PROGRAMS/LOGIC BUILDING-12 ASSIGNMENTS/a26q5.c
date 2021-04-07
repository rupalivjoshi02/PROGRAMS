/* Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.

Input:A
Output: Decimal:65
	Octal:0101
	Hexadecimal:0X41

*/


#include<stdio.h>

void Display(char ch)
{
	if((ch>=0) && (ch<=255))
	{
		printf("\nDecimal:%d",ch);
		printf("\nOctal:%o",ch);
		printf("\nHexadecimal:%x",ch);
	}
}

int main()
{
	char cvalue='\0';

	printf("Enter the chharacter:");
	scanf("%c",&cvalue);

	Display(cvalue);

	return(0);
}



