// input : irow=5 , icol=5
// output:  1  2  3  4  5
//	   -1 -2 -3 -4 -5
//	    1  2  3  4  5
//	   -1 -2 -3 -4 -5
//	    1  2  3  4  5



#include<stdio.h>

void Pattern(int irow,int icol)
{
	int i=0,j=0,k=0;

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
//			if((i%2)!=0)
//			{
//				k=j;

//				printf(" %d\t ",k);
//			}
//			else
//			{
//				k=-j;

//				printf(" %d\t ",k);
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
			if((i%2)!=0)
			{
				k=j;

				printf(" %d\t ",k);
			}
			else
			{
				k=-j;

				printf(" %d\t ",k);
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



