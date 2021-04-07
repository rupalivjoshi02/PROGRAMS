/* Accept number from user and display below pattern.

Input:5
Output:5 # 4 # 3 # 2 # 1 #

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=ino;i>0;i--)
	{
		printf("%d # ",i);
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
