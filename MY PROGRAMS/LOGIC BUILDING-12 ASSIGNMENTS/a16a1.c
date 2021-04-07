//Input : irow=4 icol=4
//Output : A B C D
//	   A B C D
//	   A B C D
//	   A B C D



#include<stdio.h>

void Pattern(int irow,int icol)
{
	int i=0,j=0;
	char ch='\0';

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
//		for(j=1,ch='A';j<=icol;j++,ch++)
//		{
//			printf(" %c ",ch);
//		}

//		printf("\n");
//	}

	i=1;

	while(i<=irow)
	{
		j=1;
		ch='A';

		while(j<=icol)
		{
			printf(" %c ",ch);

			j++;
			ch++;
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


