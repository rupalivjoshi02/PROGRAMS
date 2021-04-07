/* A program that illustarte that it is allowed to define a structure type within the structure definition list of another structure type definition. */

#include<stdio.h>

#define MAXBOOKS 100

struct Phonebook
{
	struct Name
	{
		char Fname[100];
		char Lname[100];
	}Pname;

	char Mno[100];
};

int main()
{
	struct Phonebook p1[MAXBOOKS]={{"Anil","Kumar"}};
	struct Phonebook p2[MAXBOOKS]={{"Anand"}};

	int icnt=0;

	printf("Enter the mobile no. of %s %s:\n",p1[icnt].Pname.Fname,p1[icnt].Pname.Lname);
	scanf(" %[^'\n']s",&p1[icnt].Mno);

	printf("Enter the mobile no. of %s %s:\n",p2[icnt].Pname.Fname,p2[icnt].Pname.Lname);
	scanf(" %[^'\n']s",&p2[icnt].Mno);

	printf("Phone book entries are:\n");

	printf("-----------------------\n");

	printf("%s %s:%s\n",p1[icnt].Pname.Fname,p1[icnt].Pname.Lname,p1[icnt].Mno);
	printf("%s %s:%s\n",p2[icnt].Pname.Fname,p2[icnt].Pname.Lname,p2[icnt].Mno);

	return(0);
}
