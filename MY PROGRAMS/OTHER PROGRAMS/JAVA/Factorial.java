import java.util.*;

class Demo
{
	public int Return(int ino)
	{
		int i=0,ifact=0;

		if(ino<0)
		{
			ino=-ino;
		}

		i=1;
		ifact=1;

		while(i<=ino)
		{
			ifact=ifact*i;

			i++;
		}

		return(ifact);
	}
}

class Factorial
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");

		ivalue=sobj.nextInt();

		Demo dobj=new Demo();

		int iret=dobj.Return(ivalue);

		System.out.println("Factorial of the given no. is "+iret);
	}
}
