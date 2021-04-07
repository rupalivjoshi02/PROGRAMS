//input: irow=4 , icol=4
//output:   * * * *
//     	    * * *  
//	    * * 
//	    *



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
//		for(j=i;j>0;j--)
//		{
//			printf(" * ");
//		}

//		printf("\n");
//	}

	i=irow;

	while(i>0)
	{
		j=i;

		while(j>0)
		{
			printf(" * ");

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

