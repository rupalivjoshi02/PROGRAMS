//input: irow=3, icol=5
//output:A A A A A
//	 B B B B B
//	 C C C C C



#include<stdio.h>

void Pattern(int irow ,int icol)
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

//	for(i=1,ch='A';i<=irow;i++,ch++)
//	{
//		for(j=1;j<=icol;j++)
//		{
//			printf(" %c ",ch);
//		}

//		printf("\n");
//	}

	i=1;
	ch='A';

	while(i<=irow)
	{
		j=1;

		while(j<=icol)
		{
			printf(" %c ",ch);

			j++;
		}

		i++;
		ch++;

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


