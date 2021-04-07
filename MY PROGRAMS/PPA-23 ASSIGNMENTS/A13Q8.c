#include<stdio.h>

int main()
{
	int no=10;
	int *p=NULL;

	p=&no;

	printf("1=%d\n",no);
	printf("2=%d\n",*p);

	*p=11;

	printf("3=%d\n",no);
	printf("4=%d\n",*p);

	return(0);
}
