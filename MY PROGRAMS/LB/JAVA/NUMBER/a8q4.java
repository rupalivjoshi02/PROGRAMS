/*	4.Write a program which accept number from user and display its table.

	Input:	2
	Output:	2 4 6 8 10 12 14 16 18 20

	Input:	-5
	Output:	5 10 15 20 25 30 35 40 45 50

	Input:	5
	Output:	5 10 15 20 25 30 35 40 45 50	*/




import java.util.*;

class Assignment8
{
	public void Display(int ino)
	{
		int i=0,itable=1;

		if(ino<0)
		{
			ino=-ino;
		}

		System.out.println("Table is ");

		for(i=1;i<=10;i++)
		{
			itable=ino*i;

			System.out.print(itable+"\t");
		}
	}
}

class a8q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment8 aobj=new Assignment8();

		aobj.Display(ivalue);
	}
}
