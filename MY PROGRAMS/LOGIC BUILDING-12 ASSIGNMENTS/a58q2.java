/* Write a program which accept number from user and return the count of odd digits.

Input:	2395
Output:	3

Input:	1018
Output:	2

Input:	-1018
Output:	2

Input:	8462
Output:	0

*/




import java.util.*;

class OddDigitCount
{
	public int Return(int ino)
	{
		int icnt=0,idig=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			if((idig%2)!=0)
			{
				icnt++;
			}

			ino=ino/10;
		}

		return(icnt);
	}
}

class a58q2
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the no.: ");

		int ivalue=sobj.nextInt();

		OddDigitCount odcobj=new OddDigitCount();

		int iret=odcobj.Return(ivalue);

		System.out.println("Count of odd digits is "+iret);
	}
}
