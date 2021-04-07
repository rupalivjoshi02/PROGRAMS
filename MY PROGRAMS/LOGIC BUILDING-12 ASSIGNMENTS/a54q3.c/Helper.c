// Helper.c


#include"Header.h"

int Return(int **arr,int irow,int icol)
{
	int i=0,j=0,imax1=0,imax2=0;

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

	imax1=arr[0][0];
	imax2=arr[0][icol-1];

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(i==j)
			{
				if(arr[i][j]>imax1)	
				{
					imax1=arr[i][j];
				}
			}
		}
	}

	for(i=0;i<irow;i++)
	{
		for(j=(icol-1);j>=0;j--)
		{
			if(i==j)
			{
				if(arr[i][j]>imax2)	
				{
					imax2=arr[i][j];
				}
			}
		}
	}

	if(imax1>imax2)
	{
		return(imax1);
	}
	else
	{
		return(imax2);
	}
}
