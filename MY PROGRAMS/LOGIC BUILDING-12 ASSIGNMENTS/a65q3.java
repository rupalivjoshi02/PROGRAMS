/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:6	icol:6
Output:	* * * * * *
	*       * *
	*     *   *
	*   *     *
	* *       *	
	* * * * * *

*/




import java.util.*;

class Pattern3
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

		for(i=irow;i>0;i--)
		{
			for(j=1;j<=icol;j++)
			{
				if((i==irow) || (i==1) || (i==j) || (j==icol) || (j==1))
				{
					System.out.print("*\t");
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

class a65q3
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern3 pobj=new Pattern3();

		pobj.Display(ivalue1,ivalue2);
	}
}
