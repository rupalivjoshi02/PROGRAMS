/*	1. Accept number from user and display below pattern..

	Input:	irow:5 icol:5

	Output:	a b c d e
		1 2 3 4 5 
		a b c d e
		1 2 3 4 5
		a b c d e	*/




import java.util.*;

class Assignment17
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

		for(i=1;i<=irow;i++)
		{
			ch='a';

			for(j=1;j<=icol;j++)
			{
				if((i%2)!=0)
				{
					System.out.print(ch+"\t");
				}
				else
				{
					System.out.print(j+"\t");
				}

				ch++;
			}

			System.out.println();
		}
	}
}

class a17q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment17 aobj=new Assignment17();

		aobj.Display(ivalue1,ivalue2);
	}
}
