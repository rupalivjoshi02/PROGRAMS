/* Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input:	2395
Output:	-15 (2 - 17)

Input:	1018
Output:	6 (8 - 2)

Input:	8440
Output:	16 (16 - 0)

Input:	5733
Output:	-18 (0 - 18)

*/




import java.util.*;

class Difference
{
	public int Return(int ino)
	{
		int ieven=0,iodd=0,idig=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			if((idig%2)==0)
			{
				ieven=ieven+idig;
			}
			else
			{
				iodd=iodd+idig;
			}

			ino=ino/10;
		}

		return(ieven-iodd);
	}
}

class a58q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the no.: ");

		int ivalue=sobj.nextInt();

		Difference dobj=new Difference();

		int iret=dobj.Return(ivalue);

		System.out.println("Difference beween summation of even and odd digits is "+iret);
	}
}
