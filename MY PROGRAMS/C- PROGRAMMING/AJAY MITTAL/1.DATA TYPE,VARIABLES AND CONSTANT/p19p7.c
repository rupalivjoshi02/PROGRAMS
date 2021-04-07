/*	A program that illustrate the use of scanf fun.	*/




#include<stdio.h>

void Display()
{
	int no;
	
	printf("\nEnter the no.: \n");
	scanf("%d",&no);

	printf("\nThe no. enetered is %d\n",no);
}

int main()
{
	int no;
	
	printf("\nEnter the no.: \n");
	scanf("%d",&no);

	printf("\nThe no. enetered is %d\n",no);

	Display();

	return(0);
}
