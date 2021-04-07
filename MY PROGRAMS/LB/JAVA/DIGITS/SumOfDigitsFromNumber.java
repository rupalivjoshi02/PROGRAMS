/*	Accept 1 no. from user and return the summation of digits of that no..

	Input:	0
	Output:	0

	Input:	15
	Output:	2

	Input:	751
	Output:	13

	Input:	53
	Output:	8

	Input:	1007
	Output:	8

	Input:	-751
	Output:	13	*/




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

			isum=isum+idig;

			ino=ino/10;
		}

		return(isum);
	}
}

class SumOfDigitsFromNumber
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Digit dobj=new Digit();

		iret=dobj.Return(ivalue);

		System.out.println("Summation of digits from the given no. is "+iret);
	}
}
