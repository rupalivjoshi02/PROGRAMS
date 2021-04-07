//input: irow=6 , icol=6
//output:   1 2 3 4 5 6
//     	    1 2       6
//	    1   3     6    
//	    1     4   6
//	    1       5 6
//	    1 2 3 4 5 6



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

	if(irow!=icol)
	{
		return;
	}

//	for(i=1;i<=irow;i++)
//	{
//		for(j=1;j<=icol;j++)
//		{
//			if((i==1) || (i==irow) || (i==j) || (j==1) || (j==icol))
//			{
//				printf(" %d ",j);
//			}
//			else
//			{	
//				printf("   ");
//			}
//		}

//		printf("\n");
//	}

	i=1;

	while(i<=irow)
	{
		j=1;

		while(j<=icol)
		{
			if((i==1) || (i==irow) || (i==j) || (j==1) || (j==icol))
			{
				printf(" %d ",j);
			}
			else
			{
				printf("   ");
			}

			j++;
		}

		i++;

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

