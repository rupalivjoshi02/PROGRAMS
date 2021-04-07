/* 	4.Write a program which accept three numbers and print its multiplication.

	Input:	5 4 7
	Output:	140

	Input:	5 0 7
	Output:	35

	Input:	5 0 0
	Output:	5

	Input:	0 0 0
	Output:	0	*/

#include<stdio.h>

int Return(int ino1,int ino2,int ino3)
{
	int imult=0;

	if((ino1!=0) && (ino2==0) && (ino3==0))
	{
		return(ino1);
	}
	else if((ino2!=0) && (ino1==0) && (ino3==0))
	{
		return(ino2);
	}
	else if((ino3!=0) && (ino1==0) && (ino2==0))
	{
		return(ino3);
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
		imult=ino1*ino2;
	}
	else
	{
		imult=ino1*ino2*ino3;
	}

	return(imult);
}

int main()
{
	int ivalue3=0,ivalue1=0,iret=0,ivalue2=0;
	
	printf("\nEnter the 3 no.: \n");
	scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

	iret=Return(ivalue1,ivalue2,ivalue3);

	printf("\nMultiplication is %d\n",iret);	

	return(0);
}
