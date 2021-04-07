/* A program that illustarte the initialisation and assignment of a structure variable. */

#include<stdio.h>

struct Book
{
	char Titel[25];
	char Author[25];
	int Price;
};

int main()
{
	struct Book b1={"Cutting Stone","Abraham",200};
	struct Book b2=b1;
	struct Book b3;

	b3=b2;

	printf("%s by %s is of Rs.%d\n",b1.Titel,b1.Author,b1.Price);
	printf("%s by %s is of Rs.%d\n",b2.Titel,b2.Author,b2.Price);
	printf("%s by %s is of Rs.%d\n",b3.Titel,b3.Author,b3.Price);

	return(0);
}
