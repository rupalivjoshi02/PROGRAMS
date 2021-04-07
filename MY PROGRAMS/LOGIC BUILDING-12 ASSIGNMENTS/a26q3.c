/* Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

Input:Q
Output:Q R S T U V W X Y Z

Input:m
Output:m l k j i h g f e d c b a

Input:4
Output:

*/




#include<stdio.h>

void Display(char ch)
{
	char cnt='\0';

/*
	if((ch>='A') && (ch<='Z'))
	{
		for(cnt=ch;cnt<='Z';cnt++)
		{
			printf("%c",cnt);
		}
	}
	else if((ch>='a') && (ch<='z'))
	{
		for(cnt=ch;cnt>='a';cnt--)
		{
			printf("%c",cnt);
		}
	}
*/

/*
	if((ch>='A') && (ch<='Z'))
	{
		cnt=ch;

		while(cnt<='Z')
		{
			printf("%c",cnt);

			cnt++;
		}
	}
	else if((ch>='a') && (ch<='z'))
	{
		cnt=ch;

		while(cnt>='a')
		{
			printf("%c",cnt);

			cnt--;
		}
	}
*/

/*
	if((ch>=65) && (ch<=90))
	{
		for(cnt=ch;cnt<=90;cnt++)
		{
			printf("%c",cnt);
		}
	}
	else if((ch>=97) && (ch<=122))
	{
		for(cnt=ch;cnt>=97;cnt--)
		{
			printf("%c",cnt);
		}
	}
*/

	if((ch>=65) && (ch<=90))
	{
		cnt=ch;

		while(cnt<=90)
		{
			printf("%c",cnt);

			cnt++;
		}
	}
	else if((ch>=97) && (ch<=122))
	{
		cnt=ch;

		while(cnt>=97)
		{
			printf("%c",cnt);

			cnt--;
		}
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




