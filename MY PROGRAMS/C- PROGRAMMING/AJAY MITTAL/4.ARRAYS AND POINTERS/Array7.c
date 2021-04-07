/* a program to illustrate the application of the sizeof operator on arrays. */


#include<stdio.h>

int main()
{
	int arr[5]={10,15,20,25,30};

	printf("Size of arr is %ld\n",sizeof(arr));

	return(0);
}
