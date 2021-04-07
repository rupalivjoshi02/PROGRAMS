/* Accept N numbers from user and accept Range, Display all elements from that range

Input:	How many no.?:6
	Elements:85 66 3 76 93 88
	Start:60
	End:90
Output: 85 66 76 88

Input:	How many no.?:6
	Elements:85 66 3 76 93 88
	Start:30
	End:50
Output: There is no such elements in that range.

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Range(int arr[],int,int,int);

int main()
{	
	int isize=0,i=0,ivalue1=0,ivalue2=0;
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

	printf("Enter the starting no.:");	
	scanf("%d",&ivalue1);

	printf("Enter the ending no.:");
	scanf("%d",&ivalue2);

	Range(p,isize,ivalue1,ivalue2);

	free(p);

	return(0);
}

void Range(int arr[],int ilength,int istart,int iend)
{
	int icnt=0;

	if((arr==NULL) && (ilength<=0))
	{
		return;
	}
	
	icnt=0;

	while(icnt<ilength)
	{
		if((arr[icnt]>=istart) && (arr[icnt]<=iend))
		{
			printf("%d ",arr[icnt]);	
		}

		icnt++;
	}
}



