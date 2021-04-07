#include<stdio.h>

int main()
{
	struct Demo
	{
		int i;
		float f;
		double d;
	};

	struct Demo dobj;
		
		dobj.i=21;
		dobj.f=6.10;
		dobj.d=7.20;

	struct Hello
	{
		int ivalue;
		float fvalue;
		int j;
	};

	struct Hello hobj;
	
	hobj.ivalue=11;
	hobj.fvalue=3.10;
	hobj.j=51;

	printf("1=%d\n",sizeof(hobj));
	printf("2=%d\n",sizeof(dobj));
	printf("3=%d\n",sizeof(struct Demo));
	printf("4=%d\n",sizeof(struct Hello));

	return(0);
}
