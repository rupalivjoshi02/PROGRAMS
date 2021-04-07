// Helper.c


#include"Header.h"

BOOL Bool(int **arr,int irow,int icol)
{
	int i=0,j=0;
	BOOL flag=YES;

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
		return(NO);
	}

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(i==j)
			{
				if(arr[i][j]!=1)
				{
					flag=NO;

					break;
				}
			}
			else
			{
				if(arr[i][j]!=0)
				{
					flag=NO;
	
					break;
				}
			}
		}
	}

	if(flag==NO)
	{
		return(NO);
	}
	else
	{
		return(YES);
	}
}
