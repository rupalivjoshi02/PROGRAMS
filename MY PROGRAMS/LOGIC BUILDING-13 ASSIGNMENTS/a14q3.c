/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow=3,icol=5
Output: 5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1

*/




#include<stdio.h>

void Display(int irow,int icol)
{
	int i=0,j=0;

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
		for(j=icol;j>0;j--)
		{
			printf(" %d ",j);
		}

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter rows and columns:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Display(ivalue1,ivalue2);

	return(0);
}


