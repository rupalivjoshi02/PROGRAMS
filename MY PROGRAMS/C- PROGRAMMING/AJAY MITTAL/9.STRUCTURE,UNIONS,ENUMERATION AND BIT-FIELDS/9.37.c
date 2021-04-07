/* A program illustarte that the values of enumeration constants are set automatically. */

#include<stdio.h>

enum CARS{alto,omni,esteem=3,wagnor,swift=1,dzire};

int main()
{
	printf("The values of the various enumeration constants are:\n");
	printf("%d%d%d%d%d%d",alto,omni,esteem,wagnor,swift,dzire);
}
