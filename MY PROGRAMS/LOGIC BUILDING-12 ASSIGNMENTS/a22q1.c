/* Accept N numbers from user and return frequency of even numbers.

Input:	How many no.?:6
	Elements:85 66 3 80 93 88
Output :3

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Evenfreq(int arr[],int);

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

	iret=Evenfreq(p,isize);

	printf("Freq. of even no. is %d",iret);

	free(p);

	return(0);
}

int Evenfreq(int arr[],int ilength)
{
	int icnt=0,ifreq=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

/*
	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%2)==0)
		{
			ifreq++;
		}
	}
*/

	icnt=0;

	while(icnt<ilength)
	{
		if((arr[icnt]%2)==0)
		{
			ifreq++;
		}

		icnt++;	
	}

	return(ifreq);
}

