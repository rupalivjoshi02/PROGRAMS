// input : irow=4 , icol=5
// output: 2  4  6  8  10
//	   1  3  5  7  9
//	   2  4  6  8  10 
//	   1  3  5  7  9



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

//	for(i=1;i<=irow;i++)
//	{
//		if((i%2)!=0)
//		{
//			for(j=1;j<=icol;j++)
//			{
//				printf(" %d ",j*2);
//			}
//		}
//		else
//		{
//			for(j=0;j<=icol-1;j++)
//			{
//				printf(" %d ",(j*2)+1);
//			}
//		}

//		printf("\n");
//	}

	i=1;

	while(i<=irow)
	{
		if((i%2)!=0)
		{
			j=1;

			while(j<=icol)
			{
				printf(" %d ",j*2);

				j++;
			}
		}
		else
		{
			j=0;

			while(j<=icol-1)
			{
				printf(" %d ",(j*2)+1);

				j++;
			}
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

