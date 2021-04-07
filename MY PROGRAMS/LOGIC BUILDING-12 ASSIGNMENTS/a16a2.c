//input: irow=4, icol=4
//output:A B C D
//	 a b c d
//	 A B C D
//	 a b c d


#include<stdio.h>

void Pattern18(int irow,int icol)
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
//		if((i%2)==0)
//		{
//			for(j=1,ch='a';j<=icol;j++,ch++)
//			{
//				printf(" %c ",ch);
//			}
//		}
//		else
//		{
//			for(j=1,ch='A';j<=icol;j++,ch++)
//			{
//				printf(" %c ",ch);		
//			}
//		}

//		printf("\n");
//	}

	i=1;

	while(i<=irow)
	{
		if((i%2)==0)
		{
			j=1;
			ch='a';

			while(j<=icol)
			{
				printf(" %c ",ch);

				j++;
				ch++;
			}
		}
		else
		{
			j=1;
			ch='A';

			while(j<=icol)
			{
				printf(" %c ",ch);

				j++;
				ch++;
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

	Pattern18(ivalue1,ivalue2);

	return(0);
}
