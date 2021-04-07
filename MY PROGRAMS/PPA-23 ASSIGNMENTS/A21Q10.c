#include<stdio.h>

struct demo
{
	void (*p)();
	int (*q)(int,int);
}obj;

void fun()
{
	printf("\nInside fun function.\n");
}

int add(int no1,int no2)
{
	int ians=0;

	ians=no1+no2;
	
	return(ians);
}

int main()
{
	int iret=0;

	obj.p = fun;

	iret = obj.q(6,5);

	printf("%d",iret);

	obj.p();

	return 0;
}
