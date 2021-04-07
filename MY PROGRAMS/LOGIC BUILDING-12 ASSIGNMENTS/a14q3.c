//Input : 5
//Output : 1 * 2 * 3 * 4 * 5 *


#include<stdio.h>

void Pattern(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino==0)
	{
		return;
	}

//	for(icnt=1;icnt<=ino;icnt++)
//	{
//		printf(" %d * ",icnt);
//	}

	icnt=1;

	while(icnt<=ino)
	{
		printf(" %d * ",icnt);

		icnt++;
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Pattern(ivalue);

	return(0);
}

