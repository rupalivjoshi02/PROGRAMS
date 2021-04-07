/*	5.Write a program which accept number from user and count frequency of such a digits which are less than 6.	

	Input:	2395
	Output:	3

	Input:	1018
	Output:	3

	Input:	96672
	Output:	1

	Input:	9440
	Output:	3	*/




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

			if(idig<6)
			{
				icnt++;
			}

			ino=ino/10;	
		}

		return(icnt);
	}
}

class a12q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment12 aobj=new Assignment12();

		iret=aobj.Return(ivalue);

		System.out.println("The freq. of such a digits which are less than 6 in the given no. is "+iret);
	}
}
