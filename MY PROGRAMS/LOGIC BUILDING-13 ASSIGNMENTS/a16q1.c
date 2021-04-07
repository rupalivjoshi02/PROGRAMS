/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow=4,icol=4
Output:	1 2 3 4
	5 6 7 8
	9 1 2 3
	4 5 6 7

*/




#include<stdio.h>

void Pattern(int irow,int icol)
{
	int i=0,j=0,icnt=1;

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
		for(j=1;j<=icol;j++,icnt++)
		{
			if(icnt>9)
			{
				icnt=1;
			}

			printf(" %d ",icnt);
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
