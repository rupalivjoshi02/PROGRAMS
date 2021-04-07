// Helper.c


#include"Header.h"

void Display(int **arr,int irow,int icol)
{
	int i=0,j=0,isum=0;

	if(irow<0)
	{
		irow=-irow;
	}

	if(icol<0)
	{
		icol=-icol;
	}

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			isum=isum+arr[j][i];
		}

		printf("\nAddition of %dth column is %d\n",i,isum);

		isum=0;
	}
}
