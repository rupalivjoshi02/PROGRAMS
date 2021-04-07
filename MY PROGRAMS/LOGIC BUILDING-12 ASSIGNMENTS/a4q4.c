/*	4.We have to design application for tourist company.Tourist company provides cars on rent.Depends on the running of car they apply   	rent.If running is less than 100 kilometres then they charge 25 rupees per kilometre .And if running is more than 100 kilometres then 	they apply 15 100 kilometres. rupees per kilometre after We have to accept number of kilometres from user and return the estimated 	rent.

	Input : 73     Output : 1825

	Input : 132    Output : 2980     

	Input : 189    Output : 3835 	*/

#include<stdio.h>

int Return2(int ikm)
{
	int itotal=0;

	if(ikm<100)
	{
		itotal=25*ikm;
	}
	else
	{
		itotal=ikm*15;
	}

	return(itotal);
}

int main()
{
	int ivalue=0,iret=0;
	
	printf("\nEnter the kilometer: \n");
	scanf(" %i",&ivalue);

	iret=Return2(ivalue);

	printf("\nEsimated rent is %d\n",iret);

	return(0);
}
