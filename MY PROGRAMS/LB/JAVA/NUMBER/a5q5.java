/*	5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

	Input:	12
	Output:	-34	(16-50)	

	Input:	10
	Output:	29	(8-37)	*/




import java.util.*;

class Assignment5
{
	public int Return(int ino)
	{
		int i=0,isum1=0,isum2=0,idiff=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<ino;i++)
		{
			if((ino%i)!=0)
			{
				isum1=isum1+i;
			}
			else
			{
				isum2=isum2+i;
			}
		}

		idiff=isum2-isum1;
		
		return(idiff);
	}
}

class a5q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment5 aobj=new Assignment5();

		iret=aobj.Return(ivalue);

		System.out.println("Differnce between factors and non-factors of the given no. is "+iret);
	}
}
