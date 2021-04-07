/* Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input:	How many no.?:6
	Elements:85 66 3 80 93 88
Output :53 (234 - 181)

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Difference(int arr[],int);

int main()
{	
	int isize=0,iret=0,i=0;
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

	iret=Difference(p,isize);

	printf("Difference is %d",iret);

	free(p);

	return(0);
}

int Difference(int arr[],int ilength)
{
	int icnt=0,ieven=0,iodd=0,idiff=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

/*

	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%2)==0)
		{
			ieven=ieven+arr[icnt];
		}
		else
		{
			iodd=iodd+arr[icnt];
		}
	}

*/

	icnt=0;

	while(icnt<ilength)
	{
		if((arr[icnt]%2)==0)
		{
			ieven=ieven+arr[icnt];
		}
		else
		{
			iodd=iodd+arr[icnt];
		}

		icnt++;
	}

	idiff=ieven-iodd;

	return(idiff);
}



