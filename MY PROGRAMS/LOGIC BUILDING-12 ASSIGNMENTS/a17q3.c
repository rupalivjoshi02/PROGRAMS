// input : irow=5 , icol=5
// output: a b c d e
//	   1 2 3 4 5
//	   a b c d e
//	   1 2 3 4 5
//	   a b c d e



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
//		for(j=1,ch='a';j<=icol;j++,ch++)
//		{
//			if((i%2)==0)
//			{
//				printf(" %d ",j);
//			}
//			else
//			{
//				printf(" %c ",ch);
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

			while(j<=icol)
			{
				printf(" %d ",j);

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


