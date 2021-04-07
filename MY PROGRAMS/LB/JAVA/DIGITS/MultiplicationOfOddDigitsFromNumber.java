/*	Accept 1 no. from user and return the multiplication of odd digits of that no..

	Input:	2681
	Output:	1

	Input:	731
	Output:	21

	Input:	-731
	Output:	21

	Input:	2266
	Output:	0

	Input:	1111
	Output:	1	*/




import java.util.*;

class Digit
{
	public int Return(int ino)
	{
		int i=0,idig=0,imult=0;

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

			if((idig%2)!=0)
			{
				imult=1;

				imult=imult*idig;
			}

			ino=ino/10;
		}

		return(imult);
	}
}

class MultiplicationOfOddDigitsFromNumber
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Digit dobj=new Digit();

		iret=dobj.Return(ivalue);

		System.out.println("Multiplication of odd digits from the given no. is "+iret);
	}
}
