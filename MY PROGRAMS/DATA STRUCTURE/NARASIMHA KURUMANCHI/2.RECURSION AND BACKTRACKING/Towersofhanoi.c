/*	Discuss towers of hanoi.	*/

#include<stdio.h>

void TowersOfHanoi(int n,char src,char dest,char aux)
{
	if(n==1)
	{
		printf("\nMove disk 1 from %c rod to %c rod.\n",src,dest);

		return;
	}

	TowersOfHanoi(n-1,src,aux,dest);

	printf("\nMove disk %d from %c rod to %c rod.\n",n,src,dest);

	TowersOfHanoi(n-1,aux,dest,src);
}

int main()
{
	int ivalue=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	TowersOfHanoi(ivalue,'A','C','B');

	return(0);
}
