/*	1. Accept number from user and display below pattern..

	Input:	irow:4 icol:4

	Output:	1 1 1 1
		2 2 2 2
		3 3 3 3
		4 4 4 4	*/




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
			for(j=1;j<=icol;j++)
			{
				System.out.print(i+"\t");
			}

			System.out.println();
		}
	}
}

class a15q5
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
