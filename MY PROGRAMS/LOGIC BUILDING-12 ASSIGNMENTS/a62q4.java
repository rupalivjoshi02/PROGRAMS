/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:3 icol:4
Output:	* # * #
	* # * #
	* # * #

*/




import java.util.*;

class Pattern4
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
				if((j%2)==0)
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			
			System.out.println();
		}
	}
}

class a62q4
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern4 pobj=new Pattern4();

		pobj.Display(ivalue1,ivalue2);
	}
}
