//Program to illustrate atomic type conversion.

#include<stdio.h>

void Atomic(int ino,float fno)
{
	printf("ino=%d\n",ino);
	printf("fno=%f\n",fno);
}

int main()
{
	int ivalue=5.4;
	float fvalue=23;
	
	Atomic(ivalue,fvalue);
	
	return(0);
}
