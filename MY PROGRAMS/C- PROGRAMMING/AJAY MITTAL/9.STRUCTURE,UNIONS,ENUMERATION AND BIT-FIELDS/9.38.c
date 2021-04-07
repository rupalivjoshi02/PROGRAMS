/* A prgram that illustarte that the initialization of an enumeration object. */

#include<stdio.h>

enum Switch{off,on};

int main()
{
	enum Switch s1=on;
	enum Switch s2=s1;
	enum Switch s3=0;

	printf("The value of enumeration object s1 is %d\n",s1);
	printf("The value of enumeration object s2 is %d\n",s2);
	printf("The value of enumeration object s3 is %d\n",s3);

	return(0);
}

