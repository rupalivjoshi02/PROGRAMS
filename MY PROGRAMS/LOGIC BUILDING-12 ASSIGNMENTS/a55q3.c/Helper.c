// Helper.c


#include"Header.h"

void Display(int **arr,int irow,int icol)
{
	int i=0,j=0,k=0,temp=0;

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
		k=irow;

		for(j=0;j<icol;j++)
		{
			k--;

			if(j<k)
			{
				temp=arr[j][i];
				arr[j][i]=arr[k][i];
				arr[k][i]=temp;
			}
		}
	}

	printf("\nMatrix after reversing each column: \n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",arr[i][j]);
		}

		printf("\n\n");
	}
}
