/* Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

Input:	No1:10(1010)
	No2:15(1111)
Output:	2 4

*/

#include<stdio.h>

typedef unsigned int UINT;

void Display(UINT ino1,UINT ino2)
{
	UINT ires=0,imask=0,ino=0;
	int icnt=0;

	imask=0X00000001;
	icnt=1;

	ino=ino1&ino2;

	while(ino!=0)
	{
		ires=imask&ino;

		if(ires==1)
		{
			printf("%d ",icnt);
		}
	
		ino=ino>>1;

		icnt++;
	}
}

int main()
{	
	UINT ivalue1=0,ivalue2=0;

	printf("Enter the 1st no.:\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the 2nd no.:\n");
	scanf("%d",&ivalue2);

	Display(ivalue1,ivalue2);

	return(0);
}
