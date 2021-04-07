/*	3. Accept one number from user if number is less than 10 then print “Hello” otherwise print “Demo”.	*/




import java.util.*;

class Assignment2
{
	public void Display(int ino)
	{
		if(ino<10)
		{
			System.out.println("Hello");
		}
		else
		{
			System.out.println("Demo");
		}
	}
}

class a2q3
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
