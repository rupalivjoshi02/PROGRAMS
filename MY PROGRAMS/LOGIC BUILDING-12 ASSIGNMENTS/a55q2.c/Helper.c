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
		k=icol;

		for(j=0;j<icol;j++)
		{
			k--;

			if(j<k)
			{
				temp=arr[i][j];
				arr[i][j]=arr[i][k];
				arr[i][k]=temp;
			}
		}
	}

	printf("\nMatrix after reversing each row: \n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",arr[i][j]);
		}

		printf("\n\n");
	}
}
