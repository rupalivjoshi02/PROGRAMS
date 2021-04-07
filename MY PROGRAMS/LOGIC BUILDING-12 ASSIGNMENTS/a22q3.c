/* Accept N numbers from user check whether that numbers contains 11 in it or not.

Input:	How many no.?:6
	Elements:85 66 11 80 93 88 90
Output :YES

Input:	How many no.?:6
	Elements:85 66 3 80 93 88 90
Output :NO

*/


/*

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Contains11(int arr[],int);

int main()
{
	int isize=0,i=0;
	int *p=NULL;
	BOOL bret=NO;

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

	//OR WHILE LOOP
	
	i=0;

	while(i<isize)
	{
		scanf("%d",&p[i]);

		i++;
	}

	bret=Contains11(p,isize);

	if(bret==YES)
	{
		printf("Array contains 11");
	}
	else
	{
		printf("Array does not contain 11");
	}

	free(p);

	return(0);
}

BOOL Contains11(int arr[],int ilength)
{
	int icnt=0;


	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==11)
		{		
			break;
		}
	}

	//OR WHILE LOOP	
	
	icnt=0;

	while(icnt<ilength)
	{
		if(arr[icnt]==11)
		{		
			break;
		}

		icnt++;
	}

	if(arr[icnt]!=11)
	{
		return(NO);	
	}
	else
	{
		return(YES);
	}
}
*/



//USING FLAG


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Contains11(int arr[],int);

int main()
{
	int isize=0,i=0;
	int *p=NULL;
	BOOL bret=NO;

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
	i=0;

	while(i<isize)
	{
		scanf("%d",&p[i]);

		i++;
	}
*/

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	bret=Contains11(p,isize);

	if(bret==YES)
	{
		printf("Array contains 11");
	}
	else
	{
		printf("Array does not contain 11");
	}

	free(p);

	return(0);
}

BOOL Contains11(int arr[],int ilength)
{
	int icnt=0,flag=0;

/*
	icnt=0;

	while(icnt<ilength)
	{
		if(arr[icnt]==11)
		{	
			flag=1;
	
			break;
		}

		icnt++;
	}
*/

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==11)
		{	
			flag=1;
	
			break;
		}
	}

	if(flag==1)
	{
		return(YES);	
	}
	else
	{
		return(NO);
	}
}




