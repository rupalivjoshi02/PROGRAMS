/*	Find the area and circumference of a circle with radius r.

	Input:	5
	Output:	78.57,31.43	*/




#include<stdio.h>
#include<math.h>

void Display(float frad)
{
	float far=0.0,fc=0.0;

	far=3.14*frad*frad;
	fc=2*3.14*frad;

	printf("\nArea of the circle is %f\n",far);
	printf("\nCircumference of the circle is %f\n",fc);
}

int main()
{
	float frad=0.0,far=0.0,fc=0.0;

	printf("\nEnter the radius: \n");
	scanf("%f",&frad);

	far=3.14*frad*frad;
	fc=2*3.14*frad;

	printf("\nArea of the circle is %f\n",far);
	printf("\nCircumference of the circle is %f\n",fc);

	Display(frad);

	return(0);
}
