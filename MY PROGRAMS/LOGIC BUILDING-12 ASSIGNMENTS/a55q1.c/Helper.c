// Helper.c


#include"Header.h"

void Display(int **arr,int irow,int icol)
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

	printf("\nTranspose of matrix: \n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",arr[j][i]);
		}

		printf("\n\n");
	}
}
