#include<stdio.h>

int main()
{
	int ans=0,no1=0,no2=0;

	no1=0X0000000A;
	no2=0X0000000B;

	ans=no1&no2;

	printf("1=%d\n",ans);

	ans=no1|no2;

	printf("2=%d\n",ans);

	ans=no1^no2;

	printf("3=%d\n",ans);

	return(0);
}
