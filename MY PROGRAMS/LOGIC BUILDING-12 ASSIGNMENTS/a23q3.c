/* Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.

Input:	How many no.?:6
	No.:66
	Elements:85 66 3 66 93 88
Output:	3

Input:	How many no.?:6
	No.:93
	Elements:85 66 3 66 93 88
Output:	4

Input:	How many no.?:6
	No.:12
	Elements:85 11 3 15 11 111
Output:	-1

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Last(int arr[],int,int);

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

	iret=Last(p,isize,ivalue);

	printf("Last of that no. is %d",iret);

	free(p);

	return(0);
}

int Last(int arr[],int ilength,int ino)
{
	int icnt=0;

	if((arr==NULL) && (ilength<=0))
	{
		return(0);
	}

/*
	icnt=ilength-1;

	while(icnt>-1)
	{
		if(arr[icnt]==ino)
		{
			break;
		}

		icnt--;
	}

	if(icnt==-1)
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

	for(icnt=ilength-1;icnt>-1;icnt--)
	{
		if(arr[icnt]==ino)
		{
			flag=1;

			break;
		}
	}

	if(flag==1)
	{
		return(icnt);
	}
	else
	{
		return(-1);
	}
}



