/* Accept N numbers from user and return the difference between largest and smallest number.

Input: 	N:6
	Elements:85 66 3 66 93 88
Output: 90 (93-3)

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Return(int arr[],int);

int main()
{
	int isize=0,i=0,iret=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	printf("Enter the elements:");

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	iret=Return(p,isize);

	printf("Difference is %d",iret);

	free(p);

	return(0);
}

int Return(int arr[],int ilength)
{
	int icnt=0,imin=0,imax=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

	imin=arr[0];
	imax=arr[0];

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(imin>arr[icnt])
		{
			imin=arr[icnt];
		}
		else if(imax<arr[icnt])
		{
			imax=arr[icnt];
		}
	}   

	return(imax-imin);          
}
