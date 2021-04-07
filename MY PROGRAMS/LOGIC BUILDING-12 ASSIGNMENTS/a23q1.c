/* Accept N numbers from user and accept one another number as NO , check whether NO is present or not.

Input:	How many no.?:6
	No.:66
	Elements:85 66 3 66 93 88
Output:	YES

Input:	How many no.?:6
	No.:12
	Elements:85 11 3 15 11 111
Output:	NO

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Presentno(int arr[],int,int);

int main()
{
	int isize=0,ivalue=0,i=0;
	BOOL bret=NO;
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

	printf("Enter the no. to search:");	
	scanf("%d",&ivalue);
	
	bret=Presentno(p,isize,ivalue);

	if(bret==YES)
	{
		printf("No. is present in array.");
	}
	else
	{	
		printf("No. is not present in array.");	
	}

	free(p);

	return(0);
}

int Presentno(int arr[],int ilength,int ino)
{
	int icnt=0;

	if((arr==NULL) && (ilength<=0))
	{
		return(0);
	}

/*
	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==ino)
		{
			break;
		}
	}

	if(arr[icnt]!=ino)
	{
		return(NO);
	}
	else
	{	
		return(YES);	
	}
*/

	//USING FLAG
	
	BOOL flag=NO;

	icnt=0;
	
	while(icnt<ilength)
	{
		if(arr[icnt]==ino)
		{
			flag=YES;

			break;
		}

		icnt++;
	}
	
	if(flag==YES)
	{
		return(YES);
	}
	else
	{
		return(NO);	
	}
}

