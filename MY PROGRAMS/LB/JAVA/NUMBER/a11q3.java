/*	3. Write a program which accept range from user and return addition of all numbers in between that range. 
	(Range should contains positive numbers only)

	Input:	23 30	
	Output:	212

	Input:	10 18	
	Output:	126

	Input:	-10 2	
	Output:	Invalid range.

	Input:	90 18	
	Output:	Invalid input.	*/




import java.util.*;

class Assignment11
{
	public void Display(int ino1,int ino2)
	{
		int i=0,iadd=0;

		if((ino1>ino2) || (ino1<0) || (ino2<0))
		{
			System.out.println("Invalid input.");

			return;
		}

		for(i=ino1;i<=ino2;i++)
		{
			iadd=iadd+i;
		}

		System.out.println("Addition of all no. in between the range is "+iadd);
	}
}

class a11q3
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
