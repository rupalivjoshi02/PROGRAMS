#include<stdio.h>

extern int i;
extern int j;
extern int arr[4];

void Gun();

int main()
{
	printf("The value of i is %d\n",i);
	printf("The value of j is %d\n",j);

	j=51;

	printf("The value of j is %d\n",j);
	printf("The value from array is %d\n",arr[0]);
	printf("The value from array is %d\n",arr[1]);
	printf("The value from array is %d\n",arr[2]);
	printf("The value from array is %d\n",arr[3]);

	Fun();
	Gun();

	return(0);
}

int i=20;

void Gun()
{
	printf("Inside gun\n");
}
