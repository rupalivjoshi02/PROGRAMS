/* Accept N numbers from user and accept one another number as NO , check whether NO is present or not.

Input: 	N:6
	No.:66
	Elements:85 66 3 66 93 88 
Output: YES

Input:	N:6 	
	No.:12
	Elements:85 11 3 15 11 111 
Output: NO

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(int arr[],int,int);

int main()
{
	int isize=0,i=0,ivalue=0;
	int *p=NULL;
	BOOL bret=NO;

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

	bret=Bool(p,isize,ivalue);

	if(bret==YES)
	{
		printf("No. is present");
	}
	else
	{
		printf("No. is't present");
	}

	free(p);

	return(0);
}

BOOL Bool(int arr[],int ilength,int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;	
	}

	if((arr==NULL) || (ilength<=0))
	{
		return(NO);
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
		return(YES);
	}
	else
	{
		return(NO);
	}
}
