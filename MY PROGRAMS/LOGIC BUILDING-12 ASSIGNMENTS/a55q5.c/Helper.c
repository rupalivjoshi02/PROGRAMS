// Helper.c


#include"Header.h"

BOOL Bool(int **arr,int irow,int icol)
{
	int i=0,j=0,icnt=0;

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
			if(arr[i][j]==0)
			{	
				icnt++;
			}
		}
	}

	if(icnt>(irow*icol)/2)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}
