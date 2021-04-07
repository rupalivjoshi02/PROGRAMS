/*	4. Accept two numbers from user and display first number in second number of times.

	Input:	12 5
	Output:	12 12 12 12 12

	Input:	-2 3
	Output:	-2 -2 -2
	
	Input:	21 -3
	Output:	21 21 21

	Input:	-2 0
	Output:		*/




import java.util.*;

class Assignment2
{
	public void Display(int ino1,int ino2)
	{
		int i=0;

		if(ino1<0)
		{
			ino1=-ino1;
		}

		if(ino2<0)
		{
			ino2=-ino2;
		}

		for(i=1;i<=ino2;i++)
		{
			System.out.print(ino1+"\t");
		}
	}
}

class a2q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter 2 no.: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment2 aobj=new Assignment2();

		aobj.Display(ivalue1,ivalue2);
	}
}
