/* Accept N numbers from user check whether that numbers contains 11 in it or not.

Input: 	No.:6
	Elements:85 66 3 80 93 88 
Output: NO

Input: 	No.:6
	Elements:85 66 11 80 93 88 
Output: YES

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(int arr[],int);

int main()
{
	int isize=0,i=0;
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

	bret=Bool(p,isize);

	if(bret==YES)
	{
		printf("An array contains no. 11.");
	}
	else
	{
		printf("An array does't contain no. 11.");
	}

	free(p);

	return(0);
}

BOOL Bool(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(NO);
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==11)
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
