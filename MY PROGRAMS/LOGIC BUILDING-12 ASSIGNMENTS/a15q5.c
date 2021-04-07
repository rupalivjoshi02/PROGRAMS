//Input : irow=3 icol=4
//Output : 1 1 1 1
//	   2 2 2 2
//	   3 3 3 3


#include<stdio.h>

void Pattern(int irow,int icol)
{
	int i=0,j=0;

	if((irow==0) || (icol==0))
	{
		return;
	}

	if(irow<0)
	{
		irow=-irow;
	}

	if(icol<0)
	{
		icol=-icol;
	}

//	for(i=1;i<=irow;i++)
//	{
//		for(j=1;j<=icol;j++)
//		{
///			printf(" %d ",i);
//		}

//		printf("\n");
//	}

	i=1;

	while(i<=irow)
	{
		j=1;

		while(j<=icol)
		{
			printf(" %d ",i);

			j++;
		}

		i++;

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter row and coloumn:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Pattern(ivalue1,ivalue2);

	return(0);
}

