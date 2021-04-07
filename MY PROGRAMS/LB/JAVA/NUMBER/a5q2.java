/*	2.Write a program which accept number from user and display its factors in decreasing order.

	Input:	12
	Output:	6 4 3 2 1

	Input:	13
	Output:	1	

	Input:	10
	Output:	5 2 1 	*/




import java.util.*;

class Assignment5
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=(ino/2);i>0;i--)
		{
			if((ino%i)==0)
			{
				System.out.print(i+"\t");
			}
		}
	}
}

class a5q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment5 aobj=new Assignment5();

		aobj.Display(ivalue);
	}
}
