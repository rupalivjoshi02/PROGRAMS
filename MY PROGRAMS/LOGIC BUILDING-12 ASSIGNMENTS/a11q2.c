/*	2. Write a program which accept range from user and display all even numbers in between that range.
	
	Input:	23 35
	Output:	24  26  28  30  32  34 

	Input:	10 18
	Output:	10 12 14 16 18

	Input:	10 10
	Output:	10

	Input:	-10 2
	Output:	-10 -8 -6 -4 -2 0 2

	Input:	90 18
	Output:	Invalid range	*/




#include<stdio.h>

void Display(int ino1,int ino2)
{
	int icnt=0;

	if(ino1>ino2)
	{
		printf("Invalid range");
	}

	icnt=ino1;
	
	while(icnt<=ino2)
	{
		if((icnt%2)==0)
		{
			printf("%d\t",icnt);
		}

		icnt++;
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("\nEnter the range: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	Display(ivalue1,ivalue2);	

	return(0);
}

