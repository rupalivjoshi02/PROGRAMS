/*	4.Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

	Input:	23 30
	Output:	108

	Input:	10 18
	Output:	70

	Input:	-10 2
	Output:	Invalid range

	Input:	90 18
	Output:	Invalid range	*/




#include<stdio.h>

int Return(int ino1,int ino2)
{
	int icnt=0,isum=0;
	
	if(ino1>ino2) 
	{
		printf("Invalid range");
	}

	if((ino1<0) || (ino2<0))
	{
		printf("Invalid range");
	}
	else 
	{
		icnt=ino1;

		while(icnt<=ino2)
		{
			if((icnt%2)==0)
			{
				isum=isum+icnt;
			}

			icnt++;
		}
	}

	return(isum);
}

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("\nEnter the range: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Return(ivalue1,ivalue2);

	printf("\nAddition of all even no. from the given range is %d\n",iret);	

	return(0);
}

