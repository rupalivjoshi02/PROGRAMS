/* Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input:	A
Output:	Decimal:65
	Octal:0101
	Hexadecimal:0X41

*/




#include<stdio.h>

void Display(char ch)
{
	if((ch>=0) && (ch<=255))
	{
		printf("Character into decimal no. is %d\n",ch);
		printf("Character into octal no. is %o\n",ch);
		printf("Character into hexadecimal no. is %x\n",ch);
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




