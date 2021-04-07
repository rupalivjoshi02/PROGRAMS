/* Accept N numbers from user and display all such elements which are divisible by 3 and 5.

Input:	How many no.?:6
	Elements:85 66 3 15 93 88
Output :15

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Divby3and5(int arr[],int);

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

/*
	i=0;

	while(i<isize)
	{
		scanf("%d",&p[i]);

		i++;
	}
*/

	Divby3and5(p,isize);

	free(p);

	return(0);
}

void Divby3and5(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL) || (ilength<=0))
	{
		return;
	}

/*
	icnt=0;

	while(icnt<ilength)
	{
		if(((arr[icnt]%3)==0) && ((arr[icnt]%5)==0))
		{
			printf("%d ",arr[icnt]);
		}

		icnt++;
	}
*/

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(((arr[icnt]%3)==0) && ((arr[icnt]%5)==0))
		{
			printf("%d ",arr[icnt]);
		}
	}
}

