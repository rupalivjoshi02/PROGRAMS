/* Accept N numbers from user and return product of all odd elements.

Input: 	N:6
	Elements:15 66 3 70 10 88 
Output: 45

Input: 	N:6
	Elements:44 66 72 70 10 88 
Output: 0

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

	printf("Product of add no. is %d",iret);

	free(p);

	return(0);
}

int Return(int arr[],int ilength)
{
	int icnt=0,imult=1;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%2)!=0)
		{
			imult=imult*arr[icnt];
		}
	}

	if(imult==1)
	{
		imult=0;
	}

	return(imult);
}
