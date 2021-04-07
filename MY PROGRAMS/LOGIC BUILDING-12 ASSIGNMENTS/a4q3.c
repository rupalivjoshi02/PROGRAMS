/*	3.Design application for school management system.As school is primary there are 4 standards from 1 to 4.School fees of each standard 		is different.For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 		23450.We have to accept standard from user and display the corresponding fees.

	Input : 2     Output : 12790  

	Input : 4     Output : 23450
	
	Input : 6     Output : Wrong input	*/





#include<stdio.h>

int Return1(int istd)
{	
	if(istd==1)
	{
		istd=8900;
	}
	else if(istd==2)
	{
		istd=12790;
	}
	else if(istd==3)
	{
		istd=21000;
	}
	else if(istd==4)
	{
		istd=23450;
	}
	else
	{	
		printf("\nWrong input\n");
	}

	return(istd);
}

int main()
{
	int ivalue=0,iret=0;
	
	printf("\nEnter the standard: \n");
	scanf("%d",&ivalue);

	iret=Return1(ivalue); 

	printf("%d",iret);

	return(0);
}
