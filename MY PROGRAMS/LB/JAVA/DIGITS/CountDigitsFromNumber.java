/*	Accept 1 no. from user and count the no. of digits of that no..

	Input:	751
	Output:	3

	Input:	15
	Output:	2

	Input:	7
	Output:	1

	Input:	-255
	Output:	3	*/




import java.util.*;

class Digit
{
	public int Return(int ino)
	{
		int i=0,idig=0,icnt=0;

		if(ino==0)
		{
			return(1);
		}

		while(ino!=0)
		{
			idig=ino%10;

			icnt++;

			ino=ino/10;
		}

		return(icnt);
	}
}

class CountDigitsFromNumber
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Digit dobj=new Digit();

		iret=dobj.Return(ivalue);

		System.out.println("Count of digits from the given no. is "+iret);
	}
}
