/* Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

Input:E
Output:YES

Input:d
Output:No 

*/




#include<stdio.h>

#define yes 1
#define no 0

typedef int BOOL;

BOOL Vowel(char ch)
{
	if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
	{
		return(yes);
	}
	else	
	{
		return(no);
	}
}

int main()
{
	char cvalue='\0';
	BOOL bret=no;

	printf("Enter the character:");
	scanf("%c",&cvalue);

	bret=Vowel(cvalue);

	if(bret==yes)
	{
		printf("It is a vowel.");
	}
	else
	{
		printf("It is not a vowel.");
	}

	return(0);
}
