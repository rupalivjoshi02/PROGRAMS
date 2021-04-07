/* A program that illustrate the concept of scope determination. */


#include<stdio.h>

int Sum_diff(int a,int b);			// a and b have function prototype scope

int idiff;			//diff has file or global scope

int main()
{
	int ino1=0,ino2=0,isum=0;		//ino1,ino2 and isum has block or local scope.they are said to be local to a main function

	printf("Enter 2 no.:");
	scanf("%d%d",&ino1,&ino2);

	isum=Sum_diff(ino1,ino2);

	printf("Summation is %d",isum);
	printf("difference is %d",idiff);
}

int Sum_diff(int f,int g)		//f and g has block or local scope.Thye are local to function Sum_diff
{
	int isum=0;			//isum has local or block scope

	isum=f+g;
	idiff=f-g;

	return(isum);
}



