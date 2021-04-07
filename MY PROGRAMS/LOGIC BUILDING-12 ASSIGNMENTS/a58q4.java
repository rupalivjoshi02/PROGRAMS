/* Write a program which accept number from user and return multiplication of all digits.

Input:	2395
Output:	270

Input:	1018
Output:	8

Input:	9440
Output:	144

Input:	922432
Output:	864

*/




import java.util.*;

class Multiplication
{
	public int Return(int ino)
	{
		int imult=1,idig=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			if(idig!=0)
			{
				imult=imult*idig;
			}

			ino=ino/10;
		}

		return(imult);
	}
}

class a58q4
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the no.: ");

		int ivalue=sobj.nextInt();

		Multiplication mobj=new Multiplication();

		int iret=mobj.Return(ivalue);

		System.out.println("Multiplication is "+iret);
	}
}
