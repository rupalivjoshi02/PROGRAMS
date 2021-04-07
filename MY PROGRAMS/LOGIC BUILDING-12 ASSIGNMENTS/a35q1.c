/* Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

Input:11
Output:3

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Count1(UINT ino)
{
	UINT imask=0,ires=0;
	int icnt=0,i=0;

	imask=0X00000001;
	i=1;

	while(i<=64)
	{
		ires=ino&imask;

		if(ires!=0)
		{
			icnt++;
		}

		imask=imask<<1;

		i++;
	}

	return(icnt);
}

int main()
{
	UINT ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Count1(ivalue);

	printf("Freq. of 1 is %d",iret);

	return(0);
}



