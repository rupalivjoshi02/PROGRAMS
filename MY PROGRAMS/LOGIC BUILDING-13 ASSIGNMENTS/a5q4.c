/* Write a program which accept three numbers and print its multiplication.

Input:5 4 7
Output:140

Input:5 0 7
Output:35

Input:5 0 0 
Output:5

Input:0 0 0
Output:0

*/




#include<stdio.h>

int Print(int ino1,int ino2,int ino3)
{
	int imult=1;

	if((ino1==0) && (ino2==0))
	{
		return(ino3);
	}
	else if((ino1==0) && (ino3==0))
	{
		return(ino2);
	}
	else if((ino3==0) && (ino2==0))
	{
		return(ino1);
	}

	if(ino1==0)
	{
		imult=ino2*ino3;
	}
	else if(ino2==0)
	{
		imult=ino1*ino3;
	}
	else if(ino3==0)
	{
		imult=ino2*ino1;
	}
	else 
	{
		imult=ino1*ino2*ino3;
	}

	return(imult);
}

int main()
{
	int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

	printf("Enter 3 no.:");
	scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

	iret=Print(ivalue1,ivalue2,ivalue3);

	printf("Multiplication is %d",iret);

	return(0);
}
