/* Accept N numbers from user and display all such numbers which contains 3 digits in it.

Input:	How many no.?:6
	Elements:8225 665 3 76 953 858
Output: 665 953 858

*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Digit(int arr[],int);

int main()
{
	int isize=0,i=0;
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

	Digit(p,isize);

	free(p);

	return(0);
}

void Digit(int arr[],int ilength)
{	
	int icnt=0,ifreq=0,ino=0;

	if((arr==NULL) && (ilength<=0))
	{
		return;
	}

	icnt=0;

	while(icnt<ilength)
	{
		ifreq=0;
		ino=arr[icnt];

		while(ino>0)
		{
			ifreq++;

			ino=ino/10;
		}

		if(ifreq==3)
		{
			printf("%d ",arr[icnt]);
		}

		icnt++;
	}	
}

