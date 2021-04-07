#include<stdio.h>

int main()
{
	int arr[4]={10,20,30,40};
	int *brr[4];

	brr[0]=arr;
	brr[1]=&(arr[3]);
	brr[2]=arr+1;
	brr[3]=arr+2;

	printf("1=%d\n",brr);
	printf("2=%d\n",arr);
	printf("3=%d\n",arr+1);
	printf("4=%d\n",arr[1]);
	printf("5=%d\n",brr[2]);
	printf("6=%d\n",brr+2);
	printf("7=%d\n",*(brr[2]));
	printf("8=%d\n",*(*(2+brr)));
	printf("9=%d\n",*(brr[3]));

	return(0);
}
