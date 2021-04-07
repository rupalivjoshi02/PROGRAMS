/*	Accept 1 no. from user and check whether that no. is divisible by 3 or not.	
	
	Input:	15 
	Output:	true

	Input:	-21 
	Output:	true

	Input:	17 
	Output:	false

	Input:	0 
	Output:	false	*/




import java.util.*;

class Number
{
	public boolean Boolean(int ino)
	{
		if(ino==0)
		{
			return(false);
		}

		if((ino%3)==0)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class CheckNoDivisibleBy3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Number nobj=new Number();

		bret=nobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("YES,the given no. is divisible by 3.");
		}
		else
		{
			System.out.println("NO,the given no. is not divisible by 3.");
		}
	}
}
