/* Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”. */


#include<stdio.h>

void Print(int ino)
{
	if(ino<10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}

int main()
{
	int ivalue=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	Print(ivalue);

	return(0);
}

