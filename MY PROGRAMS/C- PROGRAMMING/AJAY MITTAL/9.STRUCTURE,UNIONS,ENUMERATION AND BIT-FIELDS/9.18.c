/* A program that illustarte the use of nested structure. */

#include<stdio.h>

#define MAXBOOKS 100

struct Name
{
	char First_Name[100];
	char Last_Name[100];
};

struct Phonebook
{
	struct Name Person_Name;
	
	char Mobile_No[100];
};

int main()
{	
	struct Phonebook p1[MAXBOOKS];
	struct Phonebook p2[MAXBOOKS];

	int icnt=0;

	printf("Enter the details of 1st person :\n");

	printf("Enter the 1st name of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Person_Name.First_Name);

	printf("Enter the last name of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Person_Name.Last_Name);

	printf("Enter the mobile no. of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Mobile_No);

	printf("Enter the details of 2nd person :\n");

	printf("Enter the 1st name of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Person_Name.First_Name);

	printf("Enter the last name of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Person_Name.Last_Name);

	printf("Enter the mobile no. of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Mobile_No);

	printf("Record in the phonebook are:\n");

	printf("------------------------------\n\n");

	printf("%s %s:%s\n",p1[icnt].Person_Name.First_Name,p1[icnt].Person_Name.Last_Name,p1[icnt].Mobile_No);
	printf("%s %s:%s\n",p2[icnt].Person_Name.First_Name,p2[icnt].Person_Name.Last_Name,p2[icnt].Mobile_No);

	return(0);
}
