/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow=6,icol=6
Output:	* * * * * *
	*       * *
	*      *  *
	*    *    *
	* *       *
	* * * * * *
*/




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

	for(i=1;i<=irow;i++)
	{
		for(j=icol;j>0;j--)
		{
			if((i==1) || (i==irow) || (j==1) || (j==icol))
			{
				printf(" * ");
			}
			else if(i==j)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}

		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter the rows and columns:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Pattern(ivalue1,ivalue2);

	return(0);
}






