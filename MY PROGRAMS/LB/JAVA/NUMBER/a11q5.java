/*	5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

	Input:	23 35	
	Output:	35 34 33 32 31 30 29 28 27 26 25 24 23

	Input:	10 18	
	Output:	18 17 16 15 14 13 12 11 10

	Input:	-10 2	
	Output:	2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

	Input:	10 10
	Output:	10

	Input:	90 18	
	Output:	Invalid input.	*/




import java.util.*;

class Assignment11
{
	public void Display(int ino1,int ino2)
	{
		int i=0;

		if(ino1>ino2)
		{
			System.out.println("Invalid input.");

			return;
		}

		System.out.println("All no. in between the range in reversed order is ");

		for(i=ino2;i>=ino1;i--)
		{
			System.out.print(i+"\t");
		}
	}
}

class a11q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the range: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment11 aobj=new Assignment11();

		aobj.Display(ivalue1,ivalue2);
	}
}
