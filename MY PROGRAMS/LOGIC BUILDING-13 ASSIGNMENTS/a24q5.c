/* Accept N numbers from user and display summation of digits of each number.

Input: 	N:6
	Elements:8225 665 3 76 953 858
Output: 17 17 3 13 17 21

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int arr[],int);

int main()
{
	int isize=0,i=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	printf("Enter the elements:");

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	Display(p,isize);

	free(p);

	return(0);
}

void Display(int arr[],int ilength)
{
	int icnt=0,ino=0,idig=0,isum=0;

	if((arr==NULL) || (ilength<=0))
	{
		return;
	}
	
	icnt=0;
	
	while(icnt<ilength)
	{
		isum=0;

		ino=arr[icnt];

		while(ino!=0)	
		{
			idig=ino%10;
			isum=isum+idig;
			ino=ino/10;
		}

		printf("%d ",isum);

		icnt++;
	}      
}
