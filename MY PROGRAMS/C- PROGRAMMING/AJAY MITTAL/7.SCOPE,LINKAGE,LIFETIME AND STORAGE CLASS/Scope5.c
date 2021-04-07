/* A program ilustrating that multiple definition of an identifier can be present in different scope. */


#include<stdio.h>

int a=10,b=20;

int main()
{
	printf("The value of a:%d b:%d\n",a,b);
	{
		int a=30,b=40;

		printf("The value of a:%d b:%d\n",a,b);
		{
			float a=50.60,b=70.80;

			printf("The value of a:%f b:%f\n",a,b);
		}
	}
}
