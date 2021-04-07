#include<stdio.h>

int main()
{
	int ino1=11,ino2=32,ians=0;

	ians=ino1&ino2;

	printf("%d\n",ians);

	ians=ino1|ino2;

	printf("%d\n",ians);

	ians=ino1^ino2;

	printf("%d\n",ians);

	return(0);
}
