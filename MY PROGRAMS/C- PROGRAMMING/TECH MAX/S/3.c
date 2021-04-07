// write a program to find out the largest no. out of 4 no..

//Input : 9 5 7 2
//Output : 9

//Input : 5 33 2 1
//Output : 33

//Input : 4 6 99 2
//Output : 99

//Input : 6 88 5 300
//Output : 300


#include<stdio.h>

int Fun(int ino1,int ino2,int ino3,int ino4)
{
	if((ino1>ino2) && (ino1>ino3) && (ino1>ino4))
	{
		return(ino1);
	}
	else if((ino2>ino1) && (ino2>ino3) && (ino2>ino4))
	{
		return(ino2);
	}
	else if((ino3>ino1) && (ino3>ino2) && (ino3>ino4))
	{
		return(ino3);
	}
	else
	{
		return(ino4);
	}
}

int main()
{
	int ivalue1=0,ivalue2=0,ivalue3=0,ivalue4=0,iret=0;

	printf("Enter the !st , 2nd ,3rd and 4th no.:");
	scanf("%d%d%d%d",&ivalue1,&ivalue2,&ivalue3,&ivalue4);

	iret=Fun(ivalue1,ivalue2,ivalue3,ivalue4);

	printf("Largest no. is %d",iret);

	return(0);
}



