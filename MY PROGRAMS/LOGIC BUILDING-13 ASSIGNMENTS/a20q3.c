/* Design application for school management system. As school is primary there are 4 standards from 1 to 4. School fees of each standard is different. For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450. We have to accept standard from user and display the corresponding fees.

Input : 2	Output : 12790

Input : 4	Output : 23450

Input : 6	Output : Wrong input

*/




#include<stdio.h>

void Display(int istd)
{
	if(istd==1)
	{
		printf("Fee=Rs.8900/-only");
	}
	else if(istd==2)
	{
		printf("Fee=Rs.12790/-only");
	}
	else if(istd==3)
	{
		printf("Fee=Rs.21000/-only");
	}
	else if(istd==4)
	{
		printf("Fee=Rs.23450/-only");
	}
	else if(istd>4)
	{
		printf("Wrong input");
	}
}

int main()
{
	int ivalue=0;
	
	printf("Enter the standard:");	
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}





