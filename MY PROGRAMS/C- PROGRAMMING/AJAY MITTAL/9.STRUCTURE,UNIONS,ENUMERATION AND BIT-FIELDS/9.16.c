/* A  program that illustarte the use of array of structure. */

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

	printf("Enter the information of book1:\n\n");	
	
	printf("Enter the titel of book1:\n\n");
	scanf(" %[^'\n']s",&b1[icnt].Titel);

	printf("Enter the author of book1:\n\n");
	scanf(" %[^'\n']s",&b1[icnt].Author);

	printf("Enter the pages of book1:\n\n");
	scanf(" %d",&b1[icnt].Pages);

	printf("Enter the price of book1:\n\n");
	scanf(" %f",&b1[icnt].Price);

	printf("Do you want to enter more (Y/N):\n\n");

	printf("Enter the information of book2:\n\n");	
	
	printf("Enter the titel of book2:\n\n");
	scanf(" %[^'\n']s",&b2[icnt].Titel);

	printf("Enter the author of book2:\n\n");
	scanf(" %[^'\n']s",&b2[icnt].Author);

	printf("Enter the pages of book2:\n\n");
	scanf(" %d",&b2[icnt].Pages);

	printf("Enter the price of book2:\n\n");
	scanf(" %f",&b2[icnt].Price);

	printf("Do you want to enter more (Y/N):\n\n");

	printf("Following are the books int the library:\n\n");

	printf("%[^'\n's] by %[^'\n']s:%d Pages is of Rs. %d\n\n",b1[icnt].Titel,b1[icnt].Author,b1[icnt].Pages,b1[icnt].Price);
	printf("%[^'\n's] by %[^'\n']s:%d Pages is of Rs. %d\n\n",b2[icnt].Titel,b2[icnt].Author,b2[icnt].Pages,b2[icnt].Price);

	return(0);
}
