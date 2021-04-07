/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow=4,icol=4
Output:	* * * *
	* * * #
	* * # #
	* # # #
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

	for(i=irow;i>0;i--)
	{
		for(j=1;j<=icol;j++)
		{
			if(i>=j)
			{
				printf(" * ");
			}
			else
			{
				printf(" # ");	
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




