#include<stdio.h>
#include<stdlib.h>

void Fun(int);

int main()
{
	int ino=10;
	auto int x=20;

	Fun(ino);

	return(0);
}

void Fun(int ivalue)
{
	int i=11;
	
	printf("%d",ivalue);
}
