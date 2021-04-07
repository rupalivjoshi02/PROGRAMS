/*	1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer. 		If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% 		discount. And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and 		depends on the discount policy we have to return the amount after applying discount.

	Input:	1200
	Output:	1080

	Input:	3700
	Output:	3145

	Input:	290
	Output:	290	*/




import java.util.*;

class Assignment4
{
	public double Return(double damt)
	{
		double dtot=0.0,ddis=0.0;

		
		if(damt<500)
		{
			System.out.println("There is no discount.");

			return(0);
		}
		
		if((damt>=500) && (damt<1500))
		{
			dtot=(damt*10)/100;
		}
		else if(damt>=1500)
		{
			dtot=(damt*15)/100;
		}

		ddis=damt-dtot;

		return(ddis);
	}
}

class a4q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		double dvalue=0.0,dret=0.0;

		System.out.println("Enter the amount: ");
		dvalue=sobj.nextDouble();

		Assignment4 aobj=new Assignment4();

		dret=aobj.Return(dvalue);

		System.out.println("Discount is "+dret);
	}
}
