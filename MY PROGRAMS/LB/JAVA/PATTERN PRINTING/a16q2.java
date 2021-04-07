/*	1. Accept number from user and display below pattern..

	Input:	irow:4 icol:4

	Output:	A B C D
		a b c d
		A B C D
		a b c d	*/




import java.util.*;

class Assignment16
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
			if((i%2)!=0)
			{
				ch='A';

				for(j=1;j<=icol;j++,ch++)
				{
					System.out.print(ch+"\t");
				}
			}
			else
			{
				ch='a';

				for(j=1;j<=icol;j++,ch++)
				{
					System.out.print(ch+"\t");
				}
			}

			System.out.println();
		}
	}
}

class a16q2
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
