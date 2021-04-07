/*	1.Write a program which accept radius of circle from user and calculate its area.Consider value of PI as 3.14.  		
	(Area = PI * Radius*Radius)

	Input:	5.3	
	Output:	88.2026	

	Input:	10.4
	Output:	339.6224	*/




import java.util.*;

class Assignment10
{
	public double Return(double drc)
	{
		double pi=3.14,dar=0.0;

		dar=pi*drc*drc;

		return(dar);
	}
}

class a10q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue,dret=0.0;

		System.out.println("Enter the radius of the circle: ");
		dvalue=sobj.nextDouble();

		Assignment10 aobj=new Assignment10();

		dret=aobj.Return(dvalue);

		System.out.println("Area of the circle is "+dret);
	}
}
