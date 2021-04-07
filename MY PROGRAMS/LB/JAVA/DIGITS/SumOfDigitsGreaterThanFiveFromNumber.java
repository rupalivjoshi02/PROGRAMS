/*	Accept 1 no. from user and return the summation of digits of that no. which are greater than 5.

	Input:	23
	Output:	0

	Input:	995
	Output:	18

	Input:	751
	Output:	7

	Input:	7698
	Output:	30

	Input:	0
	Output:	0

	Input:	-751
	Output:	7	*/




import java.util.*;

class Digit
{
	public int Return(int ino)
	{
		int i=0,idig=0,isum=0;

		if(ino==0)
		{
			return(0);
		}

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			if(idig>5)
			{
				isum=isum+idig;
			}

			ino=ino/10;
		}

		return(isum);
	}
}

class SumOfDigitsGreaterThanFiveFromNumber
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Digit dobj=new Digit();

		iret=dobj.Return(ivalue);

		System.out.println("Summation of digits from the given no. which is greater than 5 is "+iret);
	}
}
