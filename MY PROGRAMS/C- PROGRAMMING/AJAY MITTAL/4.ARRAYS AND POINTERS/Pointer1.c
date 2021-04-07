/* a program that illustate the creation and usage of a ptr to an aaray. */


#include<stdio.h>

int main()
{
	int arr[2][2]={{2,1},{3,5}};
	int (*p)[2]=arr;

	printf("Address of row1 is %d\n",arr[0]);
	printf("Address of row2 is %d\n",p+1);

	printf("1st element of row1 is %d\n",arr[0][0]);
	printf("1st element of row2 is %d\n",arr[1][0]);

	return(0);
}

