// Main.c


#include"Header.h"

int main()
{
	int irow=0,icol=0,i=0,j=0;
	int **p=NULL;
	BOOL bret=NO;

	printf("\nEnter the rows and columns: \n");
	scanf("%d%d",&irow,&icol);

	p=(int**)malloc(irow*sizeof(int*));

	for(i=0;i<irow;i++)
	{
		p[i]=(int*)malloc(icol*sizeof(int));
	}

	printf("\nEnter the values: \n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}

	printf("\nMatrix is: \n");

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",p[i][j]);
		}

		printf("\n\n");
	}

	bret=Bool(p,irow,icol);

	if(bret==YES)
	{
		printf("\nThe given matrix is identity matrix.\n");
	}
	else
	{
		printf("\nThe given matrix is not identity matrix.\n");
	}

	for(i=0;i<irow;i++)
	{
		free(p[i]);
	}

	free(p);

	return(0);
}
