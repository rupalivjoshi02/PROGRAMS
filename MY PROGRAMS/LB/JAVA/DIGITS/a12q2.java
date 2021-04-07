/*	2.Write a program which accept number from user and check whether it contains 0 in it or not.

	Input:	2395
	Output:	There is no 0.

	Input:	1018
	Output:	It contains 0.

	Input:	10687
	Output:	It contains 0.

	Input:	9000
	Output:	It contains 0.	*/




import java.util.*;

class Assignment12
{
	public boolean Boolean(int ino)
	{
		int idig=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			if(idig==0)
			{
				break;
			}

			ino=ino/10;	
		}

		if(ino==0)
		{
			return(false);
		}
		else
		{
			return(true);
		}
	}
}

class a12q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment12 aobj=new Assignment12();

		bret=aobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("YES,the given no. contains 0.");
		}
		else
		{
			System.out.println("NO,the given no. does not contains 0.");
		}
	}
}
