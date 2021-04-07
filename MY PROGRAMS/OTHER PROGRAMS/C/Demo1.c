#include<stdio.h>

void primNo(int iNo1,int iNo2)
{

	int i=0,j=0,temp=0,flag=0;

	for(int i=iNo1;i<=iNo2;i++)
	{
		temp=i/2;
		flag=0;

		for(j=2;j<temp;j++)
		{
			if(i%j==0)
			{
				flag=1;

				break;
			}
		}

		if(flag==0)
		{
			printf("%d ",i);
		}
	}

	printf("\n");
}

int main()
{
	int iNo1,iNo2;

	printf("\nEnter the first no = ");
	scanf("%d",&iNo1);

	printf("\nEnter the second no = ");
	scanf("%d",&iNo2);

	primNo(iNo1,iNo2);
	
	return 0;
}


