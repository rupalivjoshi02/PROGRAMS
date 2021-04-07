#include<stdio.h>

extern int i;
extern int j;
extern int x;
extern int y=151; 	//error	

void Gun();
int Fun();

int main()
{
	printf("Inside main\n");

	Fun();	//error	
	Gun();

	return(0);
}

int i=21;

void Gun()
{
	printf("Inside gun\n");
}
