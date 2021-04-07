/* A program that illustrate the use of the storage class specifier typedef. */

#include<stdio.h>

#define MAXBOOKS 100

struct Name
{
	char Fname[100],Lname[100];
};

typedef struct Name Name;

int main()
{
	Name Person[MAXBOOKS];

	int icnt=0;

	printf("Enter the 1st name of a person:\n");
	scanf(" %[^'\n']s",&Person[icnt].Fname);

	printf("Enter the last name of a person:\n");
	scanf(" %[^'\n']s",&Person[icnt].Lname);

	printf("The name of the person is %s %s",Person[icnt].Fname,Person[icnt].Lname);
}
