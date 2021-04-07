/*	3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter).

	Input:	5
	Output:	5000

	Input:	12
	Output:	12000	*/




import java.util.*;

class Assignment10
{
	public double Return(double dkm)
	{
		double dm=0.0;

		dm=dkm*1000;

		return(dm);
	}
}

class a10q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue=0.0,dret=0.0;

		System.out.println("Enter the distance in kilometer: ");
		dvalue=sobj.nextDouble();

		Assignment10 aobj=new Assignment10();

		dret=aobj.Return(dvalue);

		System.out.println("Conversion of distance in kilometer into meter is "+dret);
	}
}
