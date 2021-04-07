/* A program that illustarte the method of passing a structure object bt passing its methods. */

#include<stdio.h>

struct Complex
{
	int re;
	int im;
};

Addition(int,int,int,int);
Multiplication(int*,int*,int*,int*);

int main()
{
	struct Complex c1,c2;

	printf("Enter the real and imaginary parts of 1st no.:\n");
	scanf("%d%d",&c1.re,&c1.im);

	printf("Enter the real and imaginary parts of 2nd no.:\n");
	scanf("%d%d",&c2.re,&c2.im);

	Addition(c1.re,c1.im,c2.re,c2.im);
	Multiplication(&c1.re,&c1.im,&c2.re,&c2.im);

	return(0);
}

Addition(int a,int b,int c,int d)
{
	if((b+d)<0)
	{
		printf("%d%di\n",a+c,b+d);
	}
	else
	{
		printf("%d+%di\n",a+c,b+d);
	}
}

Multiplication(int* a,int* b,int* c,int* d)
{
	int re=0,im=0;

	re=(*a**c)-(*b**d);
	im=(*a**d)+(*b**c);

	if(im<0)
	{
		printf("%d%di\n",re,im);
	}
	else
	{
		printf("%d+%di\n",re,im);
	}
}
