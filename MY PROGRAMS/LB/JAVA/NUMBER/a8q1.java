/*	1. Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less 		than 100 then print medium, if it is greater than 100 then print large.

	Input:	75
	Output:	Medium	*/




import java.util.*;

class Assignment8
{
	public void Display(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}

		if(ino<=50)
		{
			System.out.print("Small");
		}
		else if((ino>50) && (ino<=100))
		{
			System.out.print("Medium");
		}
		else
		{
			System.out.println("Greater");
		}
	}
}

class a8q1
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
