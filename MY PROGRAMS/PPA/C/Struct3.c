#include<stdio.h>

int main()
{
	struct Demo
	{
		int i;	
		float f;
	};

	struct Demo dobj;
	
	struct Demo arr[5];

	arr[0].i=11;
	arr[2].f=3.10;
	arr[3].i=21;

	printf("1=%d\n",sizeof(struct Demo));
	printf("2=%d\n",sizeof(dobj));
	printf("3=%d\n",sizeof(arr));
	printf("4=%d\n",sizeof(arr[2]));
	printf("5=%d\n",arr);
	printf("6=%d\n",arr+1);
	printf("7=%d\n",&arr);
	printf("8=%d\n",(&arr)+1);
	printf("9=%d\n",&(arr[3]));
	printf("10=%d\n",&(arr[0].i));
	printf("11=%d\n",&(arr[1].f));

	return(0);
}
