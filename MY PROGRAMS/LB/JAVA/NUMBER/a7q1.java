/*	1.Write a program which accept number from user and print that number of $ & * on screen.

	Input:	5
	Output:	$ * $ * $ * $ * $ *

	Input:	3
	Output:	$ * $ * $ *

	Input:	-3
	Output:	$ * $ * $ * 	*/




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
			System.out.print("$\t*\t");
		}
	}
}

class a7q1
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
