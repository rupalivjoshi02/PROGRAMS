//Input : 5
//Output : 5 # 4 # 3 # 2 # 1


#include<stdio.h>

void Pattern(int ino)
{
	int icnt=0;
	
	if(ino<0)
	{
		ino=-ino;
	}
	
	if(ino==0)
	{
		return;
	}

//	for(icnt=ino;icnt>=1;icnt--)
//	{
//		printf(" %d # ",icnt);
//	}

	icnt=ino;
	
	while(icnt>=1)
	{
		printf(" %d # ",icnt);

		icnt--;
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Pattern(ivalue);

	return(0);
}




