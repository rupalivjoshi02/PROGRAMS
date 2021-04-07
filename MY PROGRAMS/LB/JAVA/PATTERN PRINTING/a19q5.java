/*	1. Accept number from user and display below pattern..

	Input:	irow:4 icol:4

	Output:	1 2 3 4
		  2 3 4
		    3 4
		      4	*/




import java.util.*;

class Assignment19
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0;

		if(irow!=icol)
		{
			return;
		}

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		for(i=1;i<=irow;i++)
		{
			for(j=1;j<=icol;j++)
			{
				if(i>j)
				{
					System.out.print(" \t");
				}
				else
				{
					System.out.print(j+"\t");
				}
			}

			System.out.println();
		}
	}
}

class a19q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment19 aobj=new Assignment19();

		aobj.Display(ivalue1,ivalue2);
	}
}
