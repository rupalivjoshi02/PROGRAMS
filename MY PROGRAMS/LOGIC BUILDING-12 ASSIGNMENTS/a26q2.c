/* Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.


Input:Q
Output:q

Input:m
Output:M

Input:4
Output:4

Input:%
Output:%

*/


#include<stdio.h>

void Display(char ch)
{
/*
	if((ch>='A') && (ch<='Z'))
	{
		printf("Corresponding character is %c",ch+32);		
	}
	else if((ch>='a') && (ch<='z'))
	{
		printf("Corresponding character is %c",ch-32);
	}
	else
	{
		printf("Other characters are %c",ch);
	}
*/

	if((ch>=65) && (ch<=90))
	{
		printf("Corresponding character is %c",ch+32);		
	}
	else if((ch>=97) && (ch<=122))
	{
		printf("Corresponding character is %c",ch-32);
	}
	else
	{
		printf("Other characters are %c",ch);
	}
}

int main()
{
	char cvalue='\0';

	printf("Enter the character");
	scanf("%c",&cvalue);

	Display(cvalue);

	return(0);
}

