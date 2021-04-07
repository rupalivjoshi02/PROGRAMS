#include<stdio.h>

int main()
{
	double no=3.14;
	double *a=&no;
	double **b=&a;
	double ***c=&b;
	double ****d=&d;

	printf("1=%d\n",sizeof(no));
	printf("2=%d\n",sizeof(a));
	printf("3=%d\n",sizeof(b));
	printf("4=%d\n",sizeof(c));
	printf("5=%d\n",sizeof(d));
	printf("6=%d\n",sizeof(***d));
	printf("7=%d\n",sizeof(****d));
	printf("8=%d\n",sizeof(*a));
	printf("9=%d\n",sizeof(***c));
	printf("10=%d\n",sizeof(**c));	

	return(0);
}
