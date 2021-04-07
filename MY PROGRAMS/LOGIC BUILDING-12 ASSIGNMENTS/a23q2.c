/* Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

Input:	How many no.?:6
	No.:66
	Elements:85 66 3 66 93 88
Output:	1

Input:	How many no.?:6
	No.:12
	Elements:85 66 3 66 93 88
Output:	-1

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int First(int arr[],int,int);

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

	printf("Enter the no to search:");	
	scanf("%d",&ivalue);

	iret=First(p,isize,ivalue);

	printf("First of that no. is %d",iret);

	free(p);

	return(0);
}

int First(int arr[],int ilength,int ino)
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

	if(icnt==ilength)
	{
		return(-1);
	}
	else
	{	
		return(icnt);
	}
*/

	// USING FLAG //

	int flag=0;

	icnt=0;

	while(icnt<ilength)
	{
		if(arr[icnt]==ino)
		{
			flag=1;

			break;
		}

		icnt++;
	}

	if(flag!=1)
	{
		return(-1);
	}
	else
	{
		return(icnt);
	}
}




