/* Accept N numbers from user and display all such elements which are multiples of 11.

Input: 	No.:6
	Elements:85 66 3 55 93 88
Output: 66 55 88

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int arr[],int);

int main()
{
	int isize=0,i=0;
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

	Display(p,isize);

	free(p);

	return(0);
}

void Display(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL) || (ilength<=0))
	{
		return;
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%11)==0)
		{
			printf("%d ",arr[icnt]);
		}
	}
}
