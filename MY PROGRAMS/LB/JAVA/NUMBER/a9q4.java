/*	4. Write a program to find odd factorial of given number.

	Input:	5!
	Output:	15	

	Input:	-5!
	Output:	15

	Input:	10
	Output:	945	*/




import java.util.*;

class Assignment9
{
	public int Return(int ino)
	{
		int i=0,ioddfact=1;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=ino;i>0;i--)
		{
			if((i%2)!=0)
			{
				ioddfact=ioddfact*i;
			}
		}

		return(ioddfact);
	}
}

class a9q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment9 aobj=new Assignment9();

		iret=aobj.Return(ivalue);

		System.out.println("Factorial of odd no. of the given no. is "+iret);
	}
}
