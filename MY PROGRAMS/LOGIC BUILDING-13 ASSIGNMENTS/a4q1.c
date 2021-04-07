/* Write a program which accept number from user and display its multiplication of factors.

Input:12
Output:144(1*2*3*4*6)

Input:13
Output:1

Input:10
Output:10(2*5)

*/




#include<stdio.h>

void Multfact(int ino)
{
	int i=0,imult=1;

	if(ino<0)
	{		
		ino=-ino;
	}

	for(i=1;i<=ino/2;i++)
	{
		if((ino%i)==0)
		{
			imult=imult*i;
		}
	}

	printf("Multiplication is %d",imult);
}

int main()
{	
	int ivalue=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	Multfact(ivalue);

	return(0);
}

