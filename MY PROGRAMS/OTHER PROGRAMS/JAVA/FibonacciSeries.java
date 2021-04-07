import java.util.*;

class Demo
{
	public void Display(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}

		int i=0,first=0,second=0,third=0;

		second=1;

		while(i<ino)
		{
			System.out.print(first+"\t");

			third=first+second;

			first=second;
			second=third;

			i++;
		}
	}
}

class FibonacciSeries
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");

		ivalue=sobj.nextInt();

		Demo dobj=new Demo();

		dobj.Display(ivalue);
	}
}
