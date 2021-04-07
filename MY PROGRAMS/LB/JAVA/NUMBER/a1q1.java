/*	1.Program to divide two numbers.	*/




import java.util.*;

class Assignment1
{
	public double Return(int ino1,int ino2)
	{	
		double ddiv=0;

		if(ino2==0)
		{
			return(-1);
		}

		ddiv=ino1/ino2;

		return(ddiv);
	}
}

class a1q1
{
	public static void main(String arg[])
	{
		int ivalue1=15,ivalue2=5;
		double dret=0.0;

		Assignment1 aobj=new Assignment1();

		dret=aobj.Return(ivalue1,ivalue2);

		System.out.println("Division is "+dret);
	}
}





