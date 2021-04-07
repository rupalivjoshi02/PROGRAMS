/* 	5.Accept charactre from user and check whether that character is vowel or not.

	Input:	E
	Output:	TRUE

	Input:	d
	Output:	FALSE 	*/





#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Bool(char ch)
{
	if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}
}




int main()
{
	char cvalue='\0';
	BOOL bret=FALSE;

	printf("\nEnter the character: \n");
	scanf(" %c",&cvalue);

	bret=Bool(cvalue);

	if(bret==TRUE)
	{
		printf("\nThe given character is vowel. \n");
	}
	else
	{
		printf("\nThe given character is not vowel. \n");
	}

	return(0);
}
