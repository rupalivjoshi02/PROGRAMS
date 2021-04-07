/*	1.Write a program which accept number from user and display its digits in reverse order.

	Input:	2395
	Output:	5
		9
		3
		2

	Input:	-1018
	Output:	8
		1
		0	
		1

	Input:	-1018
	Output:	8
		1
		0	
		1

	Input:	9000
	Output:	0
		0
		0
		9	*/




import java.util.*;

class Assignment12
{
	public void Display(int ino)
	{
		int idig=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;

			System.out.println(idig+"\t");

			ino=ino/10;	
		}
	}
}

class a12q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment12 aobj=new Assignment12();

		aobj.Display(ivalue);
	}
}
