/*	2.Write a program which accept number from user and return the count of odd digits.	

	Input:	2395
	Output:	3

	Input:	1018
	Output:	2

	Input:	-1018
	Output:	2

	Input:	8432
	Output:	0	*/




import java.util.*;

class Assignment13
{
	public int Return(int ino)
	{
		int idig=0,icnt=0;

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

class a13q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment13 aobj=new Assignment13();

		iret=aobj.Return(ivalue);

		System.out.println("Freq. of all odd digits  in the given no. is "+iret);
	}
}
