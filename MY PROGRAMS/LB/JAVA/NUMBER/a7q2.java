/*	2.Write a program which accept number from user and print numbers till that number.

	Input:	8
	Output:	1 2 3 4 5 6 7 8	*/




import java.util.*;

class Assignment7
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<=ino;i++)
		{
			System.out.print(i+"\t");
		}
	}
}

class a7q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment7 aobj=new Assignment7();

		aobj.Display(ivalue);
	}
}
