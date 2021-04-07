/* A program that illustrate the passing of a structure object to a function by reference/address. */

#include<stdio.h>

struct Complex
{
	int re,im;
};

struct Complex Multiplication(struct Complex*,struct Complex*);

int main()
{
	struct Complex c1,c2,c3;

	printf("Enter the real and imaginary parts of 1st no.:\n");
	scanf("%d%d",&c1.re,&c1.im);

	printf("Enter the real and imaginary parts of 2nd no.:\n");
	scanf("%d%d",&c2.re,&c2.im);

	c3=Multiplication(&c1,&c2);

	if(c3.im<0)
	{	
		printf("Multiplication is %d%di\n",c3.re,c3.im);
	}
	else 
	{
		printf("Multiplication is %d%di\n",c3.re,c3.im);
	}
}

struct Complex Multiplication(struct Complex* a,struct Complex* b)
{
	struct Complex temp;

	temp.re=a->re*b->re-a->im*b->im;
	temp.im=a->re*b->im+a->im*b->re;

	return(temp);
}
