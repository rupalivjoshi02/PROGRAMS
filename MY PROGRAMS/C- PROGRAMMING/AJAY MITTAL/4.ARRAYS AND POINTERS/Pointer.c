/* A program to illustarte the use of multi level ptrs. */


#include<stdio.h>

void Pointer()
{
	int i=10;
	int *p=&i;
	int **p1=&p;
	int ***p2=&p1;
	int ****p3=&p2;
	int *****p4=&p3;
	int ******p5=&p4;
	int *******p6=&p5;
	int ********p7=&p6;
	int *********p8=&p7;
	int **********p9=&p8;
	int ***********p10=&p9;
	int ************p11=&p10;
	int *************p12=&p11;

	printf("The all values are:\n");

	printf("%d\n",*p);
	printf("%d\n",**p1);
	printf("%d\n",***p2);
	printf("%d\n",****p3);
	printf("%d\n",*****p4);
	printf("%d\n",******p5);
	printf("%d\n",*******p6);
	printf("%d\n",********p7);
	printf("%d\n",*********p8);
	printf("%d\n",**********p9);
	printf("%d\n",***********p10);
	printf("%d\n",************p11);
	printf("%d\n",*************p12);
}

int main()
{
	Pointer();
	
	return(0);
}


	
