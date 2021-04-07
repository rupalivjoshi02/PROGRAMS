/* 1.Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

Input:	75
Output:	Medium	*/




#include<stdio.h>

void Display(int ino)
{
	if(ino<50)
	{
		printf("\nSmall\n");
	}
	else if((ino>50) && (ino<100))
	{
		printf("\nMedium\n");
	}
	else if(ino>100)
	{
		printf("\nLarge\n");
	}
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.:\n");
	scanf("%d",&ivalue);
	
	Display(ivalue);	

	return(0);
}

