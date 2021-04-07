//Input : 5
//Output : A B C D E

#include<stdio.h>

void Pattern(int ino)
{
	int icnt=0;
	char ch='\0';

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino==0)
	{
		return;
	}

//	for(icnt=1,ch='A';icnt<=ino;icnt++,ch++)
//	{
//		printf(" %c ",ch);
//	}
		
	icnt=1;
	ch='A';

	while(icnt<=ino)
	{
		printf(" %c ",ch);

		icnt++;
		ch++;
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




