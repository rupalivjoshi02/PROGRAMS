/*	4. Write a program which accept three numbers and print its multiplication.

	Input:	5 4 7
	Output:	140

	Input:	5 0 7
	Output:	35

	Input:	5 0 0
	Output:	5

	Input:	0 0 0 
	Output:	0	*/




import java.util.*;
import java.io.*;
import java.lang.*;

class Assignment6
{
	public int Return(int ino1,int ino2,int ino3)
	{
		int imult=0;

		imult=1;

		if((ino1==0) && (ino2!=0) && (ino3!=0))
		{
			imult=ino2*ino3;
		}
		else if((ino2==0) && (ino1!=0) && (ino3!=0))
		{
			imult=ino1*ino3;
		}
		else if((ino3==0) && (ino2!=0) && (ino1!=0))
		{
			imult=ino1*ino2;
		}
		else if((ino1==0) && (ino2==0) && (ino3!=0))
		{
			imult=ino3;
		}
		else if((ino1==0) && (ino3==0) && (ino2!=0))
		{
			imult=ino2;
		}
		else if((ino3==0) && (ino2==0) && (ino1!=0))
		{
			imult=ino1;
		}
		else if((ino1==0) && (ino2==0) && (ino3==0))
		{
			imult=0;
		}
		else
		{
			imult=ino1*ino2*ino3;
		}

		return(imult);
	}
}

class a6q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

		System.out.println("Enter the 3 no.: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();
		ivalue3=sobj.nextInt();

		Assignment6 aobj=new Assignment6();

		iret=aobj.Return(ivalue1,ivalue2,ivalue3);

		System.out.println("Multiplication is "+iret);
	}
}
