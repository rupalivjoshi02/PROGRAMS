/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	Hello
Output:	H # # # #
	H e # # #
	H e l # #
	H e l l #
	H e l l o
	H e l l #
	H e l # #
	H e # # #
	H # # # #

*/




import java.util.*;

class Pattern5
{
	public void Display(String str)
	{
		int i=0,j=0;
		char arr[]=str.toCharArray();

		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr.length;j++)
			{
				if(i>=j)
				{
					System.out.print(arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}

			System.out.println();
		}

		for(i=(arr.length-2);i>=0;i--)
		{
			for(j=0;j<=(arr.length-1);j++)
			{
				if(i>=j)
				{
					System.out.print(arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}

			System.out.println();
		}
	}
}

class a64q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		Pattern5 pobj=new Pattern5();

		pobj.Display(str1);
	}
}
