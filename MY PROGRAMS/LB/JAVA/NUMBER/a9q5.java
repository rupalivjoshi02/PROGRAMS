/*	5. Write a program which returns difference between Even factorial and odd factorial of given number.

	Input:	5!
	Output:	-7	(8-15)	

	Input:	-5!
	Output:	-7

	Input:	10
	Output:	2895	*/




import java.util.*;

class Assignment9
{
	public int Return(int ino)
	{
		int i=0,ioddfact=1,ievenfact=1;

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
			else
			{
				ievenfact=ievenfact*i;
			}
		}

		return(ievenfact-ioddfact);
	}
}

class a9q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment9 aobj=new Assignment9();

		iret=aobj.Return(ivalue);

		System.out.println("Difference between even and odd factorial of the given no. is "+iret);
	}
}
