#include<stdio.h>

int main()
{
	int ans=0,no=0;

	no=0X00000010;

	ans=no<<3;
	
	printf("1=%d\n",ans);

	ans=no>>3;

	printf("2=%d\n",ans);

	return(0);
}
