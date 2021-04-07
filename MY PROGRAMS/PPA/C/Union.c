#include<stdio.h>

int main()
{
	union Hello
	{
		int i;
		float f;
		double d;
	};

	union Hello hobj;

	printf("1=%d\n",sizeof(hobj));

	hobj.i=11;

	printf("2=%d\n",(hobj.i));
	printf("3=%f\n",(hobj.f));
	printf("4=%lf\n",(hobj.d));

	hobj.f=21.0;
	
	printf("5=%d\n",(hobj.i));
	printf("6=%f\n",(hobj.f));
	printf("7=%lf\n",(hobj.d));

	return(0);
}
