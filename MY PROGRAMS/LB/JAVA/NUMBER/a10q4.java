/*	4. Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)).

	Input:	10
	Output:	-12.222222	

	Input:	34
	Output:	1.111111	*/




import java.util.*;

class Assignment10
{
	public double Return(double df)
	{
		double dc=0.0;

		dc=(df-32)*0.555556;

		return(dc);
	}
}

class a10q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue=0.0,dret=0.0;

		System.out.println("Enter the tempreture in fahrenheit: ");
		dvalue=sobj.nextDouble();

		Assignment10 aobj=new Assignment10();

		dret=aobj.Return(dvalue);

		System.out.println("Conversion of tempreture in fahrenheit into celcius is "+dret);
	}
}
