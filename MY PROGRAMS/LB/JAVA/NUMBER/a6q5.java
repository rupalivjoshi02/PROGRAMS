/*	5. Write a program which accept total marks & obtained marks from user and calculate percentage.

	Input:	1000 745
	Output:	74.5%	*/




import java.util.*;
import java.io.*;
import java.lang.*;

class Assignment6
{
	public float Return(float ftot,float fobt)
	{
		float fper,fmarks;

		fmarks=fobt/ftot;
		fper=fmarks*100;

		return(fper);
	}
}

class a6q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		float fvalue1,fvalue2,fret;

		System.out.println("Enter the total and obtained marks: ");
		fvalue1=sobj.nextFloat();
		fvalue2=sobj.nextFloat();

		Assignment6 aobj=new Assignment6();

		fret=aobj.Return(fvalue1,fvalue2);

		System.out.println("Percentage is "+fret+"%");
	}
}
