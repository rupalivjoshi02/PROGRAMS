/* We have to design application for tourist company. Tourist company provides cars on rent. Depends on the running of car they apply rent. If running is less than 100 kilometres then they charge 25 rupees per kilometre . And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.We have to accept number of kilometres from user and return the estimated rent.

Input : 73	Output : 1825

Input : 132	Output : 2980

Input : 6	Output : 3835

*/




#include<stdio.h>

int Kilometer(int ikm)
{	
	int idisc=0;

	if(ikm<100)
	{
		idisc=ikm*25;
	}
	else if(ikm>=100)
	{
		idisc=(ikm*15)+1000;
	}

	return(idisc);
}

int main()
{
	int ivalue=0,iret=0;
	
	printf("Enter the kilometer:");	
	scanf("%d",&ivalue);

	iret=Kilometer(ivalue);

	printf("Rent is %d",iret);

	return(0);
}


