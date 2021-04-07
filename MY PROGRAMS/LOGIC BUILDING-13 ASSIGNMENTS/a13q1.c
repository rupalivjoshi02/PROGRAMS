/* Accept number from user and display below pattern.

Input:5
Output:A B C D E

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;
	char ch='\0';

	if(ino<0)
	{
		ino=-ino;
	}

	ch='A';

	for(i=0;i<ino;i++)
	{
		printf("%c ",ch);

		ch++;
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
