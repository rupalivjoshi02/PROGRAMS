/*	3.Write a program which accept number from user and count frequency of 2 in it.

	Input:	2395
	Output:	1

	Input:	1018
	Output:	0

	Input:	922432
	Output:	3

	Input:	9000
	Output:	0	*/




import java.util.*;

class Assignment12
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

			if(idig==2)
			{
				icnt++;
			}

			ino=ino/10;	
		}

		return(icnt);
	}
}

class a12q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment12 aobj=new Assignment12();

		iret=aobj.Return(ivalue);

		System.out.println("The freq. of 2 in the given no. is "+iret);
	}
}
