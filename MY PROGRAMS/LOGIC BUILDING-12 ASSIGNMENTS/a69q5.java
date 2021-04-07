/* Write Java program which accept array from user and display below pattern.

Input:	8 9 7 6 4 2 4
Output:	* * * * * * * *
	* * * * * *
	* * * *	
	* *
	* * * *
	
*/




import java.util.*;

class Pattern
{
	public void Display(int arr[])
	{
		int i=0,j=0;

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]%2)==0)
			{
				for(j=0;j<arr[i];j++)
				{
					System.out.print("*\t");
				}
			}

			System.out.println();
		}
	}
}

class a69q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements ? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];

		System.out.println("Enter the elements: ");

		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}

		Pattern pobj=new Pattern();

		pobj.Display(arr);
	}
}
