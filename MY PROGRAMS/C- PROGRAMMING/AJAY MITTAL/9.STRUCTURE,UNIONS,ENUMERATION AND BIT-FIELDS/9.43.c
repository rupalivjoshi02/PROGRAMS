/* A program that illustrate the implicite type conversion of an enumeration object. */

#include<stdio.h>

enum Shapes{triangle=3,quadrilateral,pentagon,hexagon};

int main()
{
	enum Shapes s1=triangle,s2=quadrilateral,s3;

	printf("The no. of verices in s1 are %d\n",s1);
	printf("The no. of verices in s2 are %d\n",s2);
	printf("Total no. of verices in s1 and s2 are %d\n",s1+s2);

	s3=2*s1;

	printf("The no. of verices in s3 are %d\n",s3);
}
