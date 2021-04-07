/* accept program toillustarte the method of reading , storing and accessing elelments of a 2D array. */



#include<stdio.h>

void Array(int irow,int icol)
{
	int arr[100][100]={'\0'};
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}

	if(icol<0)
	{
		icol=-icol;
	}

	printf("Enter the elements:");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("2D array is:\n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d ",arr[i][j]);
		}

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("How many rows?\n");
	scanf("%d",&ivalue1);

	printf("How many columns?\n");
	scanf("%d",&ivalue2);

	Array(ivalue1,ivalue2);

	return(0);
}
