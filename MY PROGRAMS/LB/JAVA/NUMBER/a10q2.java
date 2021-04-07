/*	2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height).

	Input:	5.3	9.78
	Output:	51.834	*/




import java.util.*;

class Assignment10
{
	public double Return(double dwt,double dht)
	{
		double dar=0.0;

		dar=dwt*dht;

		return(dar);
	}
}

class a10q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue1=0.0,dvalue2=0.0,dret=0.0;

		System.out.println("Enter the width and height of the rectangle: ");
		dvalue1=sobj.nextDouble();
		dvalue2=sobj.nextDouble();

		Assignment10 aobj=new Assignment10();

		dret=aobj.Return(dvalue1,dvalue2);

		System.out.println("Area of the rectangle is "+dret);
	}
}
