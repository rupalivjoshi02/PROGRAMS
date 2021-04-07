/* Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

Input:No1.:10,No2.:15
Output:2 4

*/




#include<stdio.h>

typedef unsigned int UINT;

void Commonbit(UINT ino1,UINT ino2)
{
	UINT imask=0,ires=0,ino=0;
	int icnt=1;

	ino=ino1&ino2;

	imask=0X00000001;

	while(ino!=0)
	{
		ires=imask&ino;

		if(ires==1)
		{
			printf("%d ",icnt);
		}

		icnt++;

		ino=ino>>1;
	}
}

int main()
{
	UINT ivalue1=0,ivalue2=0;

	printf("Enter 2 no.:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Commonbit(ivalue1,ivalue2);

	return(0);
}

