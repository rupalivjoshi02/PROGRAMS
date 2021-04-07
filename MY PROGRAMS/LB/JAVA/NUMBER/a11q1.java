/*	1.Write a program which accept range from user and display all numbers in between that range.

	Input:	23 35	
	Output:	23 24 25 26 27 28 29 30 31 32 33 34 35	

	Input:	10 18	
	Output:	10 11 12 13 14 15 16 17 18

	Input:	10 10	
	Output:	10

	Input:	-10 2	
	Output:	-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

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
		
		System.out.println("All no. in between the range is  ");

		for(i=ino1;i<=ino2;i++)
		{
			System.out.print(i+"\t");
		}
	}
}

class a11q1
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
