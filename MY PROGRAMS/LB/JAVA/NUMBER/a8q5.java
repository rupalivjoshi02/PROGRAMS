/*	5. Write a program which accept number from user and display its table in reverse order.

	Input:	2
	Output:	20 18 16 14 12 10 8 6 4 2

	Input:	-5
	Output:	50 45 40 35 30 25 20 15 10 5

	Input:	5
	Output:	50 45 40 35 30 25 20 15 10 5	*/




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

		for(i=10;i>0;i--)
		{
			itable=ino*i;

			System.out.print(itable+"\t");
		}
	}
}

class a8q5
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
