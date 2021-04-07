/*	1. Accept number from user and display below pattern..

	Input:	irow:4 icol:5

	Output:	4 4 4 4 4
		3 3 3 3 3
		2 2 2 2 2
		1 1 1 1 1	*/




import java.util.*;

class Assignment16
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

		for(i=irow;i>0;i--)
		{
			for(j=1;j<=icol;j++)
			{
				System.out.print(i+"\t");
			}

			System.out.println();
		}
	}
}

class a16q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment16 aobj=new Assignment16();

		aobj.Display(ivalue1,ivalue2);
	}
}
