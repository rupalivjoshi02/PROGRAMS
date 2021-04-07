/*	3. Write a program which accept two numbers and check whether numbers are equal or not.

	Input:	10 10
	Output:	Equal

	Input:	10 12
	Output:	Not Equal

	Input:	10 -10
	Output:	Not Equal	*/




import java.util.*;
import java.io.*;
import java.lang.*;

class Assignment6
{
	public boolean Boolean(int ino1,int ino2)
	{
		if(ino1==ino2)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class a6q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;
		boolean bret=false;

		System.out.println("Enter the 2 no.: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment6 aobj=new Assignment6();

		bret=aobj.Boolean(ivalue1,ivalue2);

		if(bret==true)
		{
			System.out.println("YES,both no. are equal.");
		}
		else
		{
			System.out.println("NO,both no. are not equal.");
		}
	}
}
