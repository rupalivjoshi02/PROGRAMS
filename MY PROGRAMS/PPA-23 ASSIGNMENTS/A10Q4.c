#include<stdio.h>

int main()
{
	double no=3.14;
	double *a=&no;
	double **b=&a;
	double ***c=&b;
	double ****d=&d;

	printf("1=%d\n",&no);
	printf("2=%d\n",a);
	printf("3=%d\n",&c);
	printf("4=%d\n",&d);
	printf("5=%d\n",d);
	printf("6=%d\n",**d);
	printf("7=%d\n",**c);
	printf("8=%d\n",*b);

	return(0);
}
