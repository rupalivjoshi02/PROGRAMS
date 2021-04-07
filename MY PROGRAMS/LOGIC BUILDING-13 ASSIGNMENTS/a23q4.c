/* Accept N numbers from user and accept Range, Display all elements from that range

Input: 	N:6
	Start:60
	End:90
	Elements:85 66 3 76 93 88 
Output: 66 76 88

Input: 	N:6
	Start:30
	End:50
	Elements:85 66 3 76 93 88 
Output: 

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int arr[],int,int,int);

int main()
{
	int isize=0,i=0,ivalue1=0,ivalue2=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	printf("Enter the elements:");

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	printf("Enter the starting no.:");
	scanf("%d",&ivalue1);

	printf("Enter the ending no.:");
	scanf("%d",&ivalue2);

	Display(p,isize,ivalue1,ivalue2);

	free(p);

	return(0);
}

void Display(int arr[],int ilength,int istart,int iend)
{
	int icnt=0;

	if((arr==NULL) || (ilength<=0))
	{
		return;
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]>istart) && (arr[icnt]<iend))
		{
				printf("%d ",arr[icnt]);
		}
	}
}
