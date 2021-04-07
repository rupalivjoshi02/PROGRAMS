/*	Given an array check whether the array is in sorted order with recursion.	*/




#include<stdio.h>

int SortedArray(int arr[],int n)
{
	if(n==1)
	{
		return(1);
	}

	return(arr[n-1]<arr[n-2])?:SortedArray(arr,n-1);
}

int main()
{
	int brr[]={10,65,45,45,2};
	int ivalue=4,iret=0;

	iret=SortedArray(brr,4);

	printf("%d",iret);

	return(0);
}
