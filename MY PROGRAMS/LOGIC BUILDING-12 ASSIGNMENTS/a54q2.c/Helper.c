// Helper.c


#include"Header.h"

int Return(int **arr,int irow,int icol,int ino)
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
			if(arr[i][j]==ino)
			{
				icnt++;
			}
		}
	}	

	return(icnt);
}
