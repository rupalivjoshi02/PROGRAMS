/* a program to illustarte that a ptr variable can't hold a non-address value. */



#include<stdio.h>

int main()
{
	int ino=10;
	int *p=ino; //not allowed 
	
	printf("The value of ino is %d\n",ino);
	printf("Ptr holds %d\n",p);

	return(0);
}
