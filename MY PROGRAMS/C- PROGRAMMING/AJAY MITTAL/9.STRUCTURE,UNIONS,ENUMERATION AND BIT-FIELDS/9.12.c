/* A program that illustrate the method of determining whether 2 strucure object are equal or not. */

#include<stdio.h>

struct Pad
{
	char a;
	int b;
	float c;
};

int main()
{
	struct Pad p1={'A',2,2.5},p2={'A',2,2.5};
	const struct Pad p3={'B',3,5.5},p4={'C',7,9.5};

	if((p1.a==p2.a) && (p1.b==p2.b) && (p1.c==p2.c))
	{
		printf("Object p1 and p2 both are equal.\n");
	}
	else 
	{
		printf("Object p1 and p2 both are unequal.\n");
	}

	if((p3.a==p4.a) && (p3.b==p4.b) && (p3.c==p4.c))
	{
		printf("Object p3 and p4 both are equal.\n");
	}
	else 
	{
		printf("Object p3 and p4 both are unequal.\n");
	}

	return(0);
}
