/* Write a java program which accept matrix from user and return its transpose matrix.

The transpose of a given matrix is formed by interchanging the rows and columns of a matrix. */




import java.util.*;

class TransposeOfMatrix
{
	public void Display(int arr[][],int irow,int icol)
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

		System.out.println("**********Method-1**********");
		System.out.println("Transpose of the mtrix is: ");

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				System.out.print(arr[j][i]+"\t");
			}

			System.out.println();
		}
	}

	public void Display1(int arr[][],int irow,int icol)
	{
		int i=0,j=0,temp=0;

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
			for(j=0;j<icol;j++)
			{
				if(j<=i)
				{
					temp=arr[i][j];
					arr[i][j]=arr[j][i];
					arr[j][i]=temp;
				}
			}
		}

		System.out.println("**********Method-2**********");
		System.out.println("Transpose of the mtrix is: ");

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}

			System.out.println();
		}
	}
}

class a70q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();
		int arr[][]=new int[ivalue1][ivalue2];

		System.out.println("Enter the elemnts: ");

		for(int i=0;i<ivalue1;i++)
		{
			for(int j=0;j<ivalue2;j++)
			{
				arr[i][j]=sobj.nextInt();
			}
		}

		System.out.println("Matrix: ");

		for(int i=0;i<ivalue1;i++)
		{
			for(int j=0;j<ivalue2;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}

			System.out.println();
		}

		

		TransposeOfMatrix tomobj=new TransposeOfMatrix();

		tomobj.Display(arr,ivalue1,ivalue2);
		tomobj.Display1(arr,ivalue1,ivalue2);
	}
}
