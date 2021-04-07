#include<stdio.h>

void No(int iNo1,int iNo2)
{

	for(int i=iNo1;i<=iNo2;i++)
	{
		if((i%3==0)&&(i%5==0))
		{
			printf("XY\t ");
		}
		else if(i%3==0)
		{
			printf("X\t");
		}
		else if(i%5==0)
		{
			printf("Y\t");
		}
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter the no.:");	
	scanf(" %d %d ",&ivalue1,&ivalue2);

	No(ivalue1,ivalue2);

	return(0);
}
