// Helper.c


#include"Header.h"

int Return(int **arr,int irow,int icol)
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

	if(irow!=icol)
	{
		return(-1);
	}

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(i==j)
			{
				isum=isum+arr[i][j];
			}
		}
	}	

	return(isum);
}
