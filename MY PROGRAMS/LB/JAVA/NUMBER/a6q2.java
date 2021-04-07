/*	2. Write a program which accept one number from user and check whether that number is greater than 100 or not.

	Input:	101
	Output:	Greater	

	Input:	39
	Output:	Small	*/




import java.util.*;
import java.io.*;
import java.lang.*;

class Assignment6
{
	public boolean Boolean(int ino)
	{
		if(ino>100)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class a6q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the 2 no.: ");
		ivalue=sobj.nextInt();

		Assignment6 aobj=new Assignment6();

		bret=aobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("The given no. is greater than 100.");
		}
		else
		{
			System.out.println("The given no. is smaller than 100.");
		}
	}
}
