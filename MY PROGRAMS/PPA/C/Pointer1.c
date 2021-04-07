#include<stdio.h>

int main()
{
	int *arr[4];
	int i=11,j=21,k=51,l=101;

	arr[0]=&i;
	arr[1]=&j;
	arr[2]=&k;
	arr[3]=&l;

	printf("1=%d\n",arr);
	printf("2=%d\n",&arr);
	printf("3=%d\n",arr+1);
	printf("4=%d\n",&arr+1);
	printf("5=%d\n",arr[0]);
	printf("6=%d\n",arr[3]);
	printf("7=%d\n",&arr[2]);
	printf("8=%d\n",*(arr+1));
	printf("9=%d\n",*(arr[1]));
	printf("10=%d\n",&j);
	printf("11=%d\n",k);
	printf("12=%d\n",*(*(arr+2)));
	printf("13=%d\n",*(2+arr));
	printf("14=%d\n",*(3[arr]));
	printf("15=%d\n",*(*(2+(arr))));

	return(0);
}
