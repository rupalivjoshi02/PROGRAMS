/* Accept N numbers from user and accept one another number as NO , return index of 1st occurrence of that NO.

Input: 	N:6
	No.:66
	Elements:85 66 3 66 93 88 
Output: 1

Input:	N:6 	
	No.:12
	Elements:85 11 3 15 11 111 
Output: -1

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Return(int arr[],int,int);

int main()
{
	int isize=0,iret=0,i=0,ivalue=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	printf("Enter the elements:");

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	printf("Enter the no. to be searched:");
	scanf("%d",&ivalue);

	iret=Return(p,isize,ivalue);

	printf("1st occurence of that no. is %d ",iret);

	free(p);

	return(0);
}

int Return(int arr[],int ilength,int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==ino)
		{
			break;
		}
	}

	if(icnt<ilength)
	{
		return(icnt);
	}
	else
	{
		return(-1);
	}
}
