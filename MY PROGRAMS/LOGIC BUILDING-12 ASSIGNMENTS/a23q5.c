/* Accept N numbers from user and return product of all odd elements.

Input:	How many no.?:6
	Elements:15 66 3 70 10 88
Output:	45

Input:	How many no.?:6
	Elements:44 66 72 70 10 88
Output:	0

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Product(int arr[],int);

int main()
{	
	int isize=0,iret=0,i=0,ivalue=0;
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

	iret=Product(p,isize);

	printf("Product of odd no. is %d",iret);

	free(p);

	return(0);
}

int Product(int arr[],int ilength)
{
	int icnt=0,imult=1;

	if((arr==NULL) && (ilength<=0))
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




