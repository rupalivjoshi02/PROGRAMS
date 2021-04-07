// Hello.c


#include<stdio.h>

int i=10;	//non-bss(data)
static int j=20;	//static segment
int k;	//bss(data)

void Fun()
{
	printf("Inside fun\n");
}
