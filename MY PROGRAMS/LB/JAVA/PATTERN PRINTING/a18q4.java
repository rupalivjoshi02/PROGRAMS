/*	1. Accept number from user and display below pattern..

	Input:	irow:5 icol:5

	Output:	* * * * *
		* @ @ @ *
		* @ @ @ *
		* @ @ @ *
		* * * * *	*/




import java.util.*;

class Assignment18
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0;

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
				if((i==1) || (i==irow) || (j==1) || (j==icol))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("@\t");
				}
			}

			System.out.println();
		}
	}
}

class a18q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment18 aobj=new Assignment18();

		aobj.Display(ivalue1,ivalue2);
	}
}
