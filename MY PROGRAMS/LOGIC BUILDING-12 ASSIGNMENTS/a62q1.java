/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:4 icol:3
Output:	* * *
	* * *
	* * *
	* * *
*/




import java.util.*;

class Pattern1
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
			for(j=0;j<icol;j++)
			{
				System.out.print("*\t");
			}
			
			System.out.println();
		}
	}
}

class a62q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern1 pobj=new Pattern1();

		pobj.Display(ivalue1,ivalue2);
	}
}
