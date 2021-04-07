/* 4.Accept two numbers from user and display first number in second number of times.

Input:	12 5
Output:	12 12 12 12 12

Input:	-2 3
Output:	-2 -2 -2

Input:	21 -3
Output:	21 21 21

Input:	-2 0
Output:	 */





#include<stdio.h>

void Display(int ino,int ifreq)
{
	int icnt=0;

	if(ifreq<0)
	{
		ifreq=-ifreq;
	}

	for(icnt=1;icnt<=ifreq;icnt++)
	{
		printf("%d\t",ino);
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;
	
	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	Display(ivalue1,ivalue2);

	return(0);
}
