/*	1. Accept number from user and display below pattern..

	Input:	4
	Output:	# 1 * # 2 * # 3 * # 4 *	*/




import java.util.*;

class Assignment14
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
			System.out.print("#\t"+i+"\t*\t");
		}
	}
}

class a14q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment14 aobj=new Assignment14();

		aobj.Display(ivalue);
	}
}
