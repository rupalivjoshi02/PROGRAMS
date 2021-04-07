/*	1. Accept number from user and display below pattern..

	Input:	irow:3 icol:5

	Output:	5 4 3 2 1
		5 4 3 2 1
		5 4 3 2 1	*/




import java.util.*;

class Assignment15
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
			for(j=icol;j>0;j--)
			{
				System.out.print(j+"\t");
			}

			System.out.println();
		}
	}
}

class a15q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment15 aobj=new Assignment15();

		aobj.Display(ivalue1,ivalue2);
	}
}
