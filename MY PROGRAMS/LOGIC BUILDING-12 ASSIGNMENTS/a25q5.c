/* Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive).

Input:C 
Output:Your exam at 9.20 AM

Input:d
Output:Your exam at 10.30 AM

*/


#include<stdio.h>

void Display(char cdiv)
{
/*
	if((cdiv=='A') || (cdiv=='a'))
	{
		printf("Your exam at 7 AM");
	}
	else if((cdiv=='B') || (cdiv=='b'))
	{
		printf("Your exam at 8:30 AM");
	}
	else if((cdiv=='C') || (cdiv=='c'))
	{
		printf("Your exam at 9:20 AM");
	}
	else if((cdiv=='D') || (cdiv=='d'))
	{
		printf("Your exam at 10:30 AM");
	}
*/

	if((cdiv==65) || (cdiv==97))
	{
		printf("Your exam at 7 AM");
	}
	else if((cdiv==66) || (cdiv==98))
	{
		printf("Your exam at 8:30 AM");
	}
	else if((cdiv==67) || (cdiv==99))
	{
		printf("Your exam at 9:20 AM");
	}
	else if((cdiv==68) || (cdiv==100))
	{
		printf("Your exam at 10:30 AM");
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






