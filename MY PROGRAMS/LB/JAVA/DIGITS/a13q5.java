/*	5.Write a program which accept number from user and return difference between summation of even digits and summation of odd 		digits.	

	Input:	2395
	Output:	-15	(2-17)

	Input:	1018
	Output:	6

	Input:	8440
	Output:	16

	Input:	5733
	Output:	-18	*/




import java.util.*;

class Assignment13
{
	public int Return(int ino)
	{
		int idig=0,ieven=0,iodd=0;

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

class a13q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment13 aobj=new Assignment13();

		iret=aobj.Return(ivalue);

		System.out.println("Difference betwwen summation of even and odd digits in the given no. is "+iret);
	}
}
