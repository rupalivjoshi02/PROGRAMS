/* a program to illastate that a ptr to any type takes the same amount of memory space. */


#include<stdio.h>

int main()
{
	char *cptr;
	int *iptr;
	float *fptr;
	double *dptr;

	printf("Pointer to character takes %ld bytes\n",sizeof(cptr));
	printf("Pointer to integer takes %ld bytes\n",sizeof(iptr));
	printf("Pointer to float takes %ld bytes\n",sizeof(fptr));
	printf("Pointer to double takes %ld bytes\n",sizeof(dptr));

	return(0);
}
