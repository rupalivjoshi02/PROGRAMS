/* A program that illustrate the use of logical operators on the object of the enumeration type. */

#include<stdio.h>

enum Combination{series=1,parellel=2};
enum Switch{off,on};

int main()
{
	enum Combination c;
	enum Switch s1,s2;

	printf("Enter the configuratonof a circuite:\n");

	printf("Press 1 for seris and 2 for parellel:\n");
	scanf("%d",&c);

	printf("Enter the status of the switches:\n");
	
	printf("Press 0 for off and 1 for on status:\n");
	scanf("%d%d",&s1,&s2);

	if(c==series)
	{
		if((s1==on) && (s2==on))
		{
			printf("The bulb will glow.");
		}
		else
		{
			printf("The bulb will not glow.");
		}
	}
	else
	{
		if((s1==on) || (s2==on))
		{
			printf("The bulb will glow.");
		}
		else
		{
			printf("The bulb will not glow.");
		}
	}
}
