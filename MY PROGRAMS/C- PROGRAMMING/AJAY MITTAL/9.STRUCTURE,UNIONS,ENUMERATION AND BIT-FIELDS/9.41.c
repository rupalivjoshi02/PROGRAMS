/* A program that illustrate the use of the equality operator on the objects of an enumeration type. */

#include<stdio.h>

enum Switch{off,on};

int main()
{
	enum Switch s1=on,s2;
	
	s2=s1;

	if(s1==s2)
	{
		printf("Both switches are on.");
	}
	else 
	{
		printf("Both switches are off.");	
	}
} 
