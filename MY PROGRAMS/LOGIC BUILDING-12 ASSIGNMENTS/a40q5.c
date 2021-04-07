/* Write a program which number from user and display below pattern.

Input:	7846
Output:	6 
	6 4  
	6 4 8
	6 4 8 7

*/




#include<stdio.h>

void Display(int ino)
{
	int temp=0,icnt=0,i=0,j=0,idig=0,irev=0,temp1=0;

	if(ino<0)
	{
		ino=-ino;
	}

	temp=ino;
	temp1=ino;

	while(temp!=0)
	{
		icnt++;

		temp=temp/10;
	}

	while(ino>0)
	{
		for(i=0;i<icnt;i++)
		{
			ino=temp1;

			for(j=0;j<icnt;j++)
			{
				if(j<=i)
				{
					idig=ino%10;

					printf("%d ",idig);
				}	

				ino=ino/10;
			}	

			printf("\n");
		}
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
