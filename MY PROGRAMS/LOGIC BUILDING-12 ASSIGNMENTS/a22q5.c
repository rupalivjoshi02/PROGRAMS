/* Accept N numbers from user and accept one another number as NO , return frequency of NO form it.

Input:	How many no.?:6
	No.:66
	Elements:85 66 3 66 93 88 
Output :2

Input:	How many no.?:6
	No.:12
	Elements:85 11 3 15 11 111 
Output :0

*/



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Freq(int arr[],int,int);

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

	iret=Freq(p,isize,ivalue);

	printf("Freq. of no. is %d",iret);

	free(p);

	return(0);
}

int Freq(int arr[],int ilength,int ino)
{
	int icnt=0,ifreq=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

/*
	for(icnt=0;icnt<=ilength;icnt++)
	{
		if(arr[icnt]==ino)
		{
			ifreq++;
		}
	}
*/

	icnt=0;

	while(icnt<=ilength)
	{		
		if(arr[icnt]==ino)
		{
			ifreq++;
		}

		icnt++;
	}

	return(ifreq);
}




