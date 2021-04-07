/* A program that illustrate the operations on the individual methods of a structure objects. */

#include<stdio.h>

#define MAXBOOKS 100

struct Book
{
	char Titel[100];
	char Author[100];
	int Pages;
	float Price;
};

int main()
{
	struct Book b1[MAXBOOKS];
	struct Book b2[MAXBOOKS];

	int icnt=0;

	printf("Enter the Titel name of book1:\n");
	scanf(" %[^'\n']s",&b1[icnt].Titel);

	printf("Enter the Author name of book1:\n");
	scanf(" %[^'\n']s",&b1[icnt].Author);
	
	printf("Enter the Pages of book1:\n");
	scanf(" %d",&b1[icnt].Pages);

	printf("Enter the Price of book1:\n");
	scanf(" %f",&b1[icnt].Price);

	printf("In 2nd edition the pages of book1 is increased by 100.\n\n");

	b1[icnt].Pages=b1[icnt].Pages+100;

	printf("In 2nd edition book1 has %d\n\n",b1[icnt].Pages);

	printf("The cost of books increased by 10%\n\n");

	b1[icnt].Price=b1[icnt].Price*1.1;

	printf("The 2nd edition of book1 is of Rs.%f\n\n",b1[icnt].Price);

	printf("Enter the Titel name of book2:\n");
	scanf(" %[^'\n']s",&b2[icnt].Titel);

	printf("Enter the Author name of book2:\n");
	scanf(" %[^'\n']s",&b2[icnt].Author);
	
	printf("Enter the Pages of book2:\n");
	scanf(" %d",&b2[icnt].Pages);

	printf("Enter the Price of book2:\n");
	scanf(" %f",&b2[icnt].Price);

	printf("In 2nd edition the pages of book2 is increased by 100.\n\n");
	
	b2[icnt].Pages=b2[icnt].Pages+100;

	printf("In 2nd edition book2 has %d\n\n",b2[icnt].Pages);

	printf("The cost of book2 is increased by 10%\n\n");

	b2[icnt].Price=b2[icnt].Price*1.1;
	
	printf("The 2nd edition of book2 is of Rs.%f\n\n",b2[icnt].Price);

	return(0);
}
