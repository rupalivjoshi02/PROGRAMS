/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:5	icol:5
Output:	1 2 3 4 5
	1 2     5
	1   3   5
	1     4 5
	1 2 3 4 5

*/




import java.util.*;

class Pattern5
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

		if(irow!=icol)
		{
			return;
		}

		for(i=1;i<=irow;i++)
		{
			for(j=1;j<=icol;j++)
			{
				if((i==irow) || (i==1) || (i==j) || (j==icol) || (j==1))
				{
					System.out.print(j+"\t");
				}
				else
				{
					System.out.print("\t");
				}
			}

			System.out.println();
		}
	}
}

class a65q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern5 pobj=new Pattern5();

		pobj.Display(ivalue1,ivalue2);
	}
}
