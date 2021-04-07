/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:4 icol:4
Output:	A B C D
	a b c d
	A B C D
	a b c d

*/




import java.util.*;

class Pattern2
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

		for(i=0;i<irow;i++)
		{
			if((i%2)==0)
			{
				ch='A';

				for(j=0;j<icol;j++)
				{
					System.out.print(ch+"\t");

					ch++;
				}
			}
			else
			{
				ch='a';

				for(j=0;j<icol;j++)
				{
					System.out.print(ch+"\t");

					ch++;
				}
			}
			
			System.out.println();
		}
	}
}

class a61q2
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern2 pobj=new Pattern2();

		pobj.Display(ivalue1,ivalue2);
	}
}
