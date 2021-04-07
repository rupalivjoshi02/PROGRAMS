/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow=5,icol=5
Output:	a b c d e
	1 2 3 4 5
	a b c d e
	1 2 3 4 5
	a b c d e

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
			for(j=1,ch='a';j<=icol;j++,ch++)
			{
				printf(" %c ",ch);
			}
		}
		else
		{
			for(j=1;j<=icol;j++)
			{
				printf(" %d ",j);
			}
		}

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter the rows and columns:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Pattern(ivalue1,ivalue2);

	return(0);
}




