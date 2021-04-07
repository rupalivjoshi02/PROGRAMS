#include<stdio.h>

int main()
{	
	int i=11;
	float f=3.14;
	double d=7.2050;
	char c='a';

	int *p=&i;
	float *q=&f;
	double *r=&d;
	char *s=&c;

	printf("1=%ld\n",sizeof(i)); 
	printf("2=%ld\n",sizeof(d));
	printf("3=%ld\n",sizeof(c));
	printf("4=%ld\n",sizeof(p));
	printf("5=%ld\n",sizeof(int));
	printf("6=%ld\n",sizeof(float));
	printf("7=%ld\n",sizeof(double));
	printf("8=%ld\n",sizeof(r));
	printf("9=%ld\n",sizeof(s));
	printf("10=%ld\n",sizeof(*p));
	printf("11=%ld\n",sizeof(*r));
	printf("12=%ld\n",sizeof(*s));
	printf("13=%ld\n",sizeof(3.14));
	printf("14=%ld\n",sizeof(11));
	printf("15=%ld\n",sizeof(3.14f));
	printf("16=%ld\n",sizeof(char));

	return(0);
}
