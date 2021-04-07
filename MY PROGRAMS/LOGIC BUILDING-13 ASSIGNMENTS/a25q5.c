/* Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)

Input:	C
Output:	Your exam at 09:20AM.

Input:	d
Output:	Your exam at 10:30AM.

*/




#include<stdio.h>

void Display(char cdiv)
{
	if((cdiv=='a') || (cdiv=='A'))
	{
		printf("Your exam at 07:00 AM.");
	}	
	else if((cdiv=='b') || (cdiv=='B'))
	{
		printf("Your exam at 08:30 AM.");
	}
	else if((cdiv=='c') || (cdiv=='C'))
	{
		printf("Your exam at 09:20 AM.");
	}
	else if((cdiv=='d') || (cdiv=='D'))
	{
		printf("Your exam at 10:30 AM.");
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


