/*	2. Accept one number from user and print that number of * on screen.	*/




import java.util.*;

class Assignment2
{
	public void Display(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}

		while(ino>0)
		{
			System.out.print("*\t");

			ino--;
		}
	}
}

class a2q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment2 aobj=new Assignment2();

		aobj.Display(ivalue);
	}
}
