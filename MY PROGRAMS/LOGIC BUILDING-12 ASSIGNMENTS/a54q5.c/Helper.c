// Helper.c


#include"Header.h"

void Display(int **arr,int irow,int icol)
{
	int i=0,j=0,temp=0;

	if(irow<0)
	{
		irow=-irow;
	}

	if(icol<0)
	{
		icol=-icol;
	}

	printf("\nUpdated matrix after swapping each consecutive rows: \n");

	for(i=0;i<(irow-1);i=i+2)
	{
		for(j=0;j<icol;j++)
		{
			temp=arr[i][j];
			arr[i][j]=arr[i+1][j];
			arr[i+1][j]=temp;
		}
	}

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",arr[i][j]);
		}

		printf("\n\n");
	}
}
