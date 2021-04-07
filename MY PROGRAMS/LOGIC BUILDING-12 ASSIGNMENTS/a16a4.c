//input: irow=4, icol=5
//output: 4 4 4 4 4
//	  3 3 3 3 3
//	  2 2 2 2 2
//	  1 1 1 1 1



#include<stdio.h>

void Pattern(int irow,int icol)
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

//	for(i=irow;i>0;i--)
//	{
//		for(j=icol;j>0;j--)
//		{
//			printf(" %d ",i);
//		}

//		printf("\n");
//	}

	i=irow;

	while(i>0)
	{
		j=icol;
	
		while(j>0)
		{
			printf(" %d ",i);

			j--;
		}

		i--;

		printf("\n");
	}
}
	

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enetr the 1st and 2nd no.:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Pattern(ivalue1,ivalue2);

	return(0);
}





