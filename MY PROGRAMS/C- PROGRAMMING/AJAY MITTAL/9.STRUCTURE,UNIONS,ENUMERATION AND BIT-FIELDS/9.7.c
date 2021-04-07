/* A program that illustarte the use of the address of operator on structure. */

#include<stdio.h>

struct Complex
{
	int re,im;
};

int main()
{
	struct Complex c1={2,3};
	const struct Complex c2={4,5};

	printf("Address of c1 is %p\n",&c1);
	printf("Address of its real part is %p\n",&c1.re);
	printf("Address of its imaginary part is %p\n",&c1.im);
	printf("Address of c2 is %p\n",&c2);
	printf("Address of its real part is %p\n",&c2.re);
	printf("Address of its imaginary part is %p\n",&c2.im);

	return(0);
}
