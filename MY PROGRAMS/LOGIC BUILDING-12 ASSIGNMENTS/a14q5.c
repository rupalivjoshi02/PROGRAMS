//Input : 8
//Output : 2 4 6 8 10 12 14 16


#include<stdio.h>

void Pattern(int ino)
{
	int icnt=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

//	for(icnt=1;icnt<=ino;icnt++)
//	{
//		imult=icnt*2;

//		printf(" %d ",imult);
//	}

	icnt=1;

	while(icnt<=ino)
	{
		imult=icnt*2;

		printf(" %d ",imult);

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
