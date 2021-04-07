/*	2. Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees.

	Input:	10
	Output:	700	

	Input:	1200
	Output:	84000

	Input:	3
	Output:	210	*/




import java.util.*;

class Assignment9
{
	public float Return(float fdol)
	{
		float frs;

		frs=fdol*70;

		return(frs);
	}
}

class a9q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		float fvalue,fret;

		System.out.println("Enter the US dollar: ");
		fvalue=sobj.nextFloat();

		Assignment9 aobj=new Assignment9();

		fret=aobj.Return(fvalue);

		System.out.println("Conversion of US dollar into Indian currency is "+fret+" Rs.");
	}
}
