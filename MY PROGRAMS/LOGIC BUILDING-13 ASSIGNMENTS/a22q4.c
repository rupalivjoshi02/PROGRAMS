/* Accept N numbers from user and return frequency of 11 form it.

Input: 	No.:6
	Elements:85 66 3 15 93 88 
Output: 0

Input: 	No.:6
	Elements:85 11 3 15 11 111 
Output: 2

*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Return(int arr[],int);

int main()
{
	int isize=0,iret=0,i=0;
	int *p=NULL;

	printf("How many no.?");
	scanf("%d",&isize);

	p=(int*)malloc(isize*sizeof(int));

	printf("Enter the elements:");

	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}

	iret=Return(p,isize);

	printf("Freq. is %d ",iret);

	free(p);

	return(0);
}

int Return(int arr[],int ilength)
{
	int icnt=0,ifreq=0;

	if((arr==NULL) || (ilength<=0))
	{
		return(0);
	}

	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==11)
		{
			ifreq++;
		}
	}

	return(ifreq);
}
