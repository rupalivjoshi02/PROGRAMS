/* Accept N numbers from user and display all such elements which are divisible by 5.

Input: 	No.:6
	Elements:85 66 3 80 93 88
Output: 85 80

*/





#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Divisibleby5(int arr[],int);

int main()
{
	int i=0,isize=0;
	int *p=NULL;

	printf("How many elements?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to store lements:");

		return(-1);
	}

	printf("Enter the elements:");
	
	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	Divisibleby5(p,isize);
	
	free(p);

	return(0);
}

void Divisibleby5(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL) || (ilength<=0))
	{
		return;
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%5)==0)
		{
			printf("%d ",arr[icnt]);
		}
	}
}
