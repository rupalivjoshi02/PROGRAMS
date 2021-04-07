/* A program that illustrate the passing of a structure object to a function by value. */

#include<stdio.h>

struct Complex
{
	int re,im;
};

struct Complex Addition(struct Complex,struct Complex);

int main()
{
	struct Complex c1,c2,c3;

	printf("Enter the real and imaginary pasrt of 1st no.:\n");	
	scanf("%d%d",&c1.re,&c1.im);

	printf("Enter the real and imaginary pasrt of 2nd no.:\n");	
	scanf("%d%d",&c2.re,&c2.im);

	c3=Addition(c1,c2);

	if(c3.im<0)
	{
		printf("Addition is %d%di\n",c3.re,c3.im);
	}
	else
	{
		printf("Addition is %d+%di\n",c3.re,c3.im);
	}
}

struct Complex Addition(struct Complex a,struct Complex b)
{
	struct Complex temp;

	temp.re=a.re+b.re;
	temp.im=a.im+b.im;

	return(temp);
}
