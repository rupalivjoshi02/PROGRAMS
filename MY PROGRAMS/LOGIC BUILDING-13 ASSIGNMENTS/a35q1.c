/* Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

Input:	11
Output:	3

*/

#include<stdio.h>

typedef unsigned int UINT;

int Return(UINT ino)
{
	UINT ires=0,imask=0;
	int icnt=0,i=0;

	imask=0X00000001;
	i=1;

	while(i<64)
	{
		ires=imask&ino;

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

	printf("Enter the no.:\n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("No. of on bits are %d",iret);

	return(0);
}
