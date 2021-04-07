/* 	Accept one character from user and convert case of that character.

	Input:	a
	Output:	A 

	Input:	D
	Output:	d 	*/




#include<stdio.h>

int Convert(char ch)
{
	if((ch>=65) && (ch<=90))
	{
		ch=ch+32;
	}
	else if((ch>=97) && (ch<=122))
	{
		ch=ch-32;
	}

	return(ch);
}

int main()
{
	char cvalue='\0',cret='\0';

	printf("Enter the character:");
	scanf("%c",&cvalue);

	cret=Convert(cvalue);

	printf("Converted character is %c",cret);

	return(0);
}
