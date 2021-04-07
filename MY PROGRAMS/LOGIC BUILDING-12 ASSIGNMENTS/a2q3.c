// 3.Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.





#include<stdio.h>

void Display(int ino)
{
	if(ino<10)
	{
		printf("\nHello\n");
	}
	else
	{
		printf("\nDemo\n");
	}
}

int main()
{
	int ivalue=0;
	
	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
