/* Accept N numbers from user and return difference between frequency of even number and odd numbers.

Input: 	No.:7
	Elements:85 66 3 80 93 88 90
Output: 1 (4-3)

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Return(int arr[],int);

int main()
{
	int iret=0,isize=0,i=0;
	int *p=NULL;

	printf("How many elements?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to store elements:");

		return(-1);
	}

	printf("Enter the elements:");
	
	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	iret=Return(p,isize);

	printf("Diffrence is %d",iret);

	free(p);

	return(0);
}

int Return(int arr[],int ilength)
{
	int icnt=0,ieven=0,iodd=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%2)==0)
		{
			ieven++;
		}
		else
		{
			iodd++;
		}
	}

	return(ieven-iodd);
}
