/* A program to illustrate that the initializer type can be different from the element type of an array. */


#include<stdio.h>

int main()
{
	int arr[]={2.3,4.5,6.9};
	float brr[]={'A','B','C'};

	printf("Elements of an array initialised with\n");

	printf("arr:%d %d %d\n",arr[0],arr[1],arr[2]);
	printf("brr:%f %f %f\n",brr[0],brr[1],brr[2]);

	return(0);
}
