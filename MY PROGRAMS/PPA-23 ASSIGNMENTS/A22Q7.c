/*	7. Write a program to find maximum of two numbers using procedural approach (C) and object oriented approach (C++).	*/




#include<stdio.h>

void Display(int ino1,int ino2)
{
	if(ino1<ino2)
	{
		printf("\nMaximum no. is %d\n",ino2);
	}
	else if(ino1>ino2)
	{
		printf("\nMaximum no. is %d\n",ino1);
	}
	else
	{
		printf("\nBoth no. are same.\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("\nEnter 2 no.: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	Display(ivalue1,ivalue2);

	return(0);
}
