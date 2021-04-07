/* Write a program which accept number from user and return the count of digits in between 3 and 7.

Input:	2395
Output:	1

Input:	1018
Output:	0

Input:	4521
Output:	2

Input:	9922
Output:	0

*/




import java.util.*;

class CountNoBetween3and7
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

			if((idig>3) && (idig<7))
			{
				icnt++;
			}

			ino=ino/10;
		}

		return(icnt);
	}
}

class a58q3
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the no.: ");

		int ivalue=sobj.nextInt();

		CountNoBetween3and7 cnbobj=new CountNoBetween3and7();

		int iret=cnbobj.Return(ivalue);

		System.out.println("Count of digits in between 3 and 7 are "+iret);
	}
}
