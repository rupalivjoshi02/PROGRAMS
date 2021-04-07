/* Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100   then print medium, if it is greater than 100 then print large.

Input:75
Output:Medium

*/




#include<stdio.h>

void Print(int ino)
{
	if(ino<50)
	{
		printf("Small");
	}
	else if((ino>=50) && (ino<100))
	{
		printf("Medium");
	}
	else
	{
		printf("Large");	
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Print(ivalue);

	return(0);
}





