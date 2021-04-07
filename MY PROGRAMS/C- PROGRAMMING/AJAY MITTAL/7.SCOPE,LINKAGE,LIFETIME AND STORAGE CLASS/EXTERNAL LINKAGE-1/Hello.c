/* A PROGRAM ILLUSTRATING THAT OBJECTS WITH EXTERNAL LINKAGE ARE ACCECIBLE WITHIN ALL THE TRANSLATION UNITS OF A PROGRAM. */


//Hello.c


#include<stdio.h>

int Fun();

int main()
{
	extern int a;
	
	printf("Value of a in main function is %d\n",a);

	Fun();
}

int a=10;


// Linkage error a define in program Hello.c is duplicate in program demo.c

