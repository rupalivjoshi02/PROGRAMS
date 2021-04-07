/*	1.Write a program which accept number from user and display its multiplication of factors.

	Input:	12
	Output:	144	(1 * 2 * 3 * 4 * 6)

	Input:	13
	Output:	1	

	Input:	10
	Output:	10	(1 * 2 * 5) 	*/




import java.util.*;

class Assignment5
{
	public int Return(int ino)
	{
		int i=0,imult=0;

		if(ino<0)
		{
			ino=-ino;
		}

		imult=1;

		for(i=1;i<=(ino/2);i++)
		{
			if((ino%i)==0)
			{
				imult=imult*i;
			}
		}

		return(imult);
	}
}

class a5q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment5 aobj=new Assignment5();

		iret=aobj.Return(ivalue);

		System.out.println("Multiplication of factors of the given no. is "+iret);
	}
}
