#include<stdio.h>

int main()
{
	int arr[6]={10,20,30};
	int no=2;

	printf("1=%d\n",arr[0]);
	printf("2=%d\n",arr[no]);
	printf("3=%d\n",arr[3-1]);
	printf("4=%d\n",arr);
	printf("5=%d\n",arr+1);
	printf("6=%d\n",(&arr)+1);
	printf("7=%d\n",&(arr[3]));
	printf("8=%d\n",arr+3);
	printf("9=%d\n",arr[4]);
	printf("10=%d\n",&(arr[5]));
	printf("11=%d\n",2[arr]);
	
	return(0);
}
