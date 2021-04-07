/* A program that illustrate the use of the storage class specifier typedef to name and rename a structure type. */

#include<stdio.h>

#define MAXBOOKS 100

typedef struct Name
{
	char Fname[100];
	char Lname[100];
}NAME;

struct Phonebook
{
	NAME Pname;

	char Mno[20];
};

typedef struct Phonebook P;

int main()
{
	P p1[MAXBOOKS];
	P p2[MAXBOOKS];

	int icnt=0;

	printf("Enter the details of 1st person:\n");

	printf("Enter the 1st name of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Pname.Fname);

	printf("Enter the last name of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Pname.Lname);

	printf("Enter the mobile no. of a person:\n");
	scanf(" %[^'\n']s",&p1[icnt].Mno);

	printf("Enter the details of 2nd person:\n");

	printf("Enter the 1st name of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Pname.Fname);

	printf("Enter the last name of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Pname.Lname);

	printf("Enter the mobile no. of a person:\n");
	scanf(" %[^'\n']s",&p2[icnt].Mno);	

	printf("Records are:\n");

	printf("------------\n");

	printf("%s %s=%s\n",p1[icnt].Pname.Fname,p1[icnt].Pname.Lname,p1[icnt].Mno);
	printf("%s %s=%s\n",p2[icnt].Pname.Fname,p2[icnt].Pname.Lname,p2[icnt].Mno);
}
