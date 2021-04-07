/* Accept N numbers from user and display summation of digits of each number.


Input:	How many no.?:6
	Elements:8225 665 3 76 953 858
Output: 17 17 3 13 17 21

*/



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Sum(int arr[],int);

int main()
{
	int isize=0,i=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory.");
	
		return(-1);
	}

	printf("Enter the elements:");
	
	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	Sum(p,isize);

	free(p);

	return(0);
}

void Sum(int arr[],int ilength)
{
	int icnt=0,isum=0,ino=0,idig=0;

	if((arr==NULL) && (ilength<=0))
	{
		return;
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		ino=arr[icnt];
		
		isum=0;

		while(ino>0)
		{
			idig=ino%10;
			isum=isum+idig;
			ino=ino/10;
		}

		printf("%d ",isum);
	}
}
