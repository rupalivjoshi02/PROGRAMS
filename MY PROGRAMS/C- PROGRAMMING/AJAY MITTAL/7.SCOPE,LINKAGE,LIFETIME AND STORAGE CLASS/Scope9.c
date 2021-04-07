/* A program that illustrating shadowing and name resolution. */


#include<stdio.h>

int a=10;			//gloabal or file scope

int main()
{
	printf("The value of a is %d\n",a);
	{
		int a=20;			//local or block scope

		printf("The value of a is %d\n",a);
		{
			float a=30.40;			//local or block scope

			printf("The value of a is %f\n",a);
		}
	}
}
