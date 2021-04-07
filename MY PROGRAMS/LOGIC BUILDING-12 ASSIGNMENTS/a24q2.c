/* Accept N numbers from user and return the smallest number.

Input:	How many no.?:6
	Elements:85 66 3 66 93 88
Output: 3

*/



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Small(int arr[],int);

int main()
{
	int isize=0,i=0,iret=0;
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

	i=0;

	while(i<isize)
	{
		scanf("%d",&p[i]);

		i++;
	}

	iret=Small(p,isize);

	printf("Smallest no. is %d",iret);

	free(p);

	return(0);
}

int Small(int arr[],int ilength)
{
	int icnt=0,ismall=0;

	if((arr==NULL) && (ilength<=0))
	{
		return(0);
	}

	ismall=arr[0];

	icnt=0;

	while(icnt<ilength)
	{
		if(arr[icnt]<ismall)
		{
			ismall=arr[icnt];
		}	

		icnt++;
	}

	return(ismall);
}

