/*	4.Write a program which accept number from user and return summation of all its non factors.

	Input:	12
	Output:	50	

	Input:	10
	Output:	37	*/




import java.util.*;

class Assignment5
{
	public int Return(int ino)
	{
		int i=0,isum=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<ino;i++)
		{
			if((ino%i)!=0)
			{
				isum=isum+i;
			}
		}
		
		return(isum);
	}
}

class a5q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment5 aobj=new Assignment5();

		iret=aobj.Return(ivalue);

		System.out.println("Summation of non-factors of the given no. is "+iret);
	}
}
