#include<stdio.h>

int main()
{
	struct Demo
	{
		int i;
		float f;

		struct Demo *p;
	};

	struct Demo dobj1;
	struct Demo dobj2;
	struct Demo dobj3;

	dobj1.i=11;
	dobj1.f=3.10;	
	dobj2.i=21;
	dobj2.f=6.10;
	dobj3.i=51;
	dobj3.f=9.10;
	dobj1.p=&dobj2;
	dobj2.p=&dobj3;
	dobj3.p=NULL;

	printf("1=%d\n",dobj1.i);
	printf("2=%d\n",dobj2.i);
	printf("3=%d\n",dobj1.p);
	printf("4=%d\n",dobj1.p->i);
	printf("5=%d\n",dobj1.p->p->i);
	printf("6=%d\n",dobj1.p->p);

	return(0);
}
