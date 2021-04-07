#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	int *p=NULL;
	int *q=NULL;
	
	p=arr;
	q=&(arr[3]);

	printf("1=%d\n",arr);
	printf("2=%d\n",&arr);
	printf("3=%d\n",arr+1);
	printf("4=%d\n",arr+3);
	printf("5=%d\n",(&arr)+1);
	printf("6=%d\n",&arr[0]);
	printf("7=%d\n",&arr[4]);
	printf("8=%d\n",p);
	printf("9=%d\n",q);
	printf("10=%d\n",*p);
	printf("11=%d\n",*q);
	printf("12=%d\n",*(p+2));
	printf("13=%d\n",*(q+1));
	printf("14=%d\n",*(q-2));
	printf("15=%ld\n",q-p);
/*	printf("16=%ld\n",p*2);
	printf("17=%ld\n",p+q);
	printf("18=%ld\n",p*q);			error
	printf("19=%ld\n",p/3);
	printf("20=%ld\n",p/q);
*/

	return(0);
}
