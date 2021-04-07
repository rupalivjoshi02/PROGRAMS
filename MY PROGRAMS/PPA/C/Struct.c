#include<stdio.h>

int main()
{
	struct Hello 
	{
		int i;
		double d;
		float f;
	};	

	struct Hello obj;
	struct Hello *p=&obj;

	obj.i=11;
	obj.d=6.10;
	obj.f=3.18;

	printf("1=%d\n",p);
	printf("2=%d\n",&p);

//	printf("3=%d\n",obj);		error

	printf("4=%d\n",&obj);
	printf("5=%d\n",obj.i);
	printf("6=%f\n",obj.d);
	printf("7=%f\n",&(obj.d));
	printf("8=%f\n",p->d);
	printf("9=%f\n",p->f);

	return(0);
}
