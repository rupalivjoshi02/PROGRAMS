/* Accept N numbers from user and display all such elements which are multiples of 11.

Input:	How many no.?:6
	Elements:85 66 3 55 93 88
Output :66 55 88

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Multiplsof11(int arr[],int);

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

/*
	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}
*/

	i=0;

	while(i<isize)
	{
		scanf("%d",&p[i]);

		i++;
	}

	Multiplsof11(p,isize);

	free(p);

	return(0);
}

void Multiplsof11(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL) && (ilength<=0))
	{
		return;
	}

/*
	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%11)==0)
		{
			printf("%d ",arr[icnt]);
		}
	}
*/

	icnt=0;

	while(icnt<ilength)
	{
		if((arr[icnt]%11)==0)
		{
			printf("%d ",arr[icnt]);
		}

		icnt++;
	}
}


