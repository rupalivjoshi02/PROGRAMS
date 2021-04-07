/* a program to depict the relation ship between arrays and ptrs. */


#include<stdio.h>

int main()
{
	int arr[3]={10,15,20};

	printf("1st elements of an array is at %d\n",arr);
	printf("2nd elements of an array is at %d\n",arr+1);
	printf("3rd elements of an array is at %d\n",arr+2);

	return(0);
}
