/* A program illustrating that the value of static variables persists between the function call. */


#include<stdio.h>

int Fun(int i);

int main()
{
	int i=0;

	for(i=0;i<5;)

	Fun(++i);
}

int Fun(int i)
{
	static int a=10;

	printf("the value of a on entry pt function on execution no. %d is %d\n",i,a);
	printf("the value of a after increament is %d\n",a);
}
