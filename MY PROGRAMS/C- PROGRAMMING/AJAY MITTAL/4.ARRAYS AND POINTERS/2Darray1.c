/* a program to illustarte the conviesion of a subscript operator into an equivalent ptr form. */


#include<stdio.h>

int main()
{
	int a[2][3]={2,1,3,2,3,4};

	printf("Use of subscript operator:\n");

	printf("%d %d %d\n",a[0][0],a[0][1],a[0][2]);
	printf("%d %d %d\n",a[1][0],a[1][1],a[1][2]);

	printf("Use of ptr expression:\n");

	printf("%d %d %d\n",*(*(a+0)+0),*(*(a+0)+1),*(*(a+0)+2));
	printf("%d %d %d\n",*(*(a+1)+0),*(*(a+1)+1),*(*(a+1)+2));

	printf("Use of mixed form of expression:\n");

	printf("%d %d %d\n",*(a[0]+0),*(a[0]+1),*(a[0]+2));
	printf("%d %d %d\n",*(a[1]+0),*(a[1]+1),*(a[1]+2));

	return(0);
}
