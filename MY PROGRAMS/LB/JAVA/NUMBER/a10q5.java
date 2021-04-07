/*	5. Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter).

	Input:	5
	Output:	0.4645	

	Input:	7
	Output:	0.6503	*/




import java.util.*;

class Assignment10
{
	public double Return(double dsqft)
	{
		double dsqmt=0.0;

		dsqmt=0.0929*dsqft;

		return(dsqmt);
	}
}

class a10q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue=0.0,dret=0.0;

		System.out.println("Enter the area in square feet: ");
		dvalue=sobj.nextDouble();

		Assignment10 aobj=new Assignment10();

		dret=aobj.Return(dvalue);

		System.out.println("Conversion of area in square feet into square meter is "+dret);
	}
}
