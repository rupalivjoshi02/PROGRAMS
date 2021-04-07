/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:3 icol:5
Output:	A A A A A 
	B B B B B
	C C C C C

*/




import java.util.*;

class Pattern3
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0;
		char ch='\0';

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		for(i=0,ch='A';i<irow;i++,ch++)
		{
			for(j=0;j<icol;j++)
			{
				System.out.print(ch+"\t");
			}
			
			System.out.println();
		}
	}
}

class a61q3
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
