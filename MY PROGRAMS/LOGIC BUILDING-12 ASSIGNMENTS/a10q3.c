/* 3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter).

Input:	5
Output:	5000

Input:	12
Output:	12000	*/




#include<stdio.h>

int Return(int idist)
{
	int ikm=0,im=0;

	im=1000;

	ikm=im*idist;

	return(ikm);	
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the distance in kilometer:\n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nConversion of distance in kilimeter into meter is %d\n",iret);	

	return(0);
}

