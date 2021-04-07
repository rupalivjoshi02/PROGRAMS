/*  Accept number of rows and number of columns from user and display below pattern.

input: irow=4, icol=4
output:	A B C D
	a b c d
	A B C D
	a b c d

*/




#include<stdio.h>

void Pattern(int irow,int icol)
{
	int i=0,j=0;
	char ch='\0';

	if(irow<0)
	{
		irow=-irow;
	}
	
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		if((i%2)!=0)
		{
			for(j=1,ch='A';j<=icol;j++,ch++)
			{
				printf(" %c ",ch);
			}
		}
		else
		{
			for(j=1,ch='a';j<=icol;j++,ch++)
			{
				printf(" %c ",ch);
			}
		}

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enetr the 1st and 2nd no.:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Pattern(ivalue1,ivalue2);

	return(0);
}

