/*	An object undergoes uniformly acclerated motion.The initial velocity(u) of the object and the accleration are known.Write a C program 		to find the velocity(v) of the object after time(t).

	Input:	2.4,4,2
	Output:	10.40 m/s	*/




#include<stdio.h>
#include<math.h>

void Display(float fu,float fa,float ft)
{
	float fv=0.0;

	fv=fu+(fa*ft);

	printf("\nFinal velocity is %f m/s\n",fv);
}

int main()
{
	float fu=0.0,fa=0.0,ft=0.0,fv=0.0;

	printf("\nEnter the initial velocity in m/s: \n");
	scanf("%f",&fu);

	printf("\nEnter the accleration: \n");
	scanf("%f",&fa);

	printf("\nEnter the time in second: \n");
	scanf("%f",&ft);

	fv=fu+(fa*ft);

	printf("\nFinal velocity is %f m/s\n",fv);

	Display(fu,fa,ft);

	return(0);
}
