/*	3.Write a program to find factorial of given number.

	Input:	5!
	Output:	120

	Input:	-5!
	Output:	120

	Input:	4!
	Output:	24	*/




import java.util.*;

class Assignment8
{
	public void Display(int ino)
	{
		int i=0,ifact=1;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=ino;i>0;i--)
		{
			ifact=ifact*i;
		}

		System.out.println("Factorial of the given no. is "+ifact);
	}
}

class a8q3
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
