/*	1.Write a program which accept number from user and display below pattern.

	Input:	5
	Output:	* * * * * # # # # #	

	Input:	6
	Output:	* * * * * * # # # # # #	

	Input:	-5
	Output:	* * * * * # # # # #

	Input:	2
	Output:	* * # #	*/




import java.util.*;

class Assignment9
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<=(2*ino);i++)
		{
			if(i<=ino)
			{
				System.out.print("*\t");
			}
			else
			{
				System.out.print("#\t");
			}
		}
	}
}

class a9q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment9 aobj=new Assignment9();

		aobj.Display(ivalue);
	}
}
