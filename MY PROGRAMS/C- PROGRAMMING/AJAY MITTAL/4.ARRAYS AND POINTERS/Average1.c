/* a scalable version of program average. */


#include<stdio.h>

float Average(int arr[],int);

int main()
{
	int arr[100];
	int i=0,isize=0;
	float iret=0;

	printf("How many students?\n");
	scanf("%d",&isize);

	for(i=0;i<isize;i++)
	{
		printf("Enter the mark of student%d:",i+1);
		scanf("%d",&arr[i]);
	}	

	iret=Average(arr,isize);

	printf("Average marks of the class is %f",iret);

	return(0);
}

float Average(int arr[],int ilength)
{
	int icnt=0;
	float iave=0,isum=0;

	for(icnt=0;icnt<ilength;icnt++)
	{
		isum=isum+arr[icnt];
		iave=isum/ilength;
	}

	return(iave);
}
