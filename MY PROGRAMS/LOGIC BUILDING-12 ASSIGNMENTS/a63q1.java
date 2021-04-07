/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	Hello
Output:	H e l l o
	H e l l o
	H e l l o
	H e l l o

*/




import java.util.*;

class Pattern1
{
	public void Display(String str)
	{
		int i=0,j=0;
		char arr[]=str.toCharArray();

		for(i=0;i<(arr.length-1);i++)
		{
			for(j=0;j<arr.length;j++)
			{
				System.out.print(arr[j]+"\t");
			}

			System.out.println();
		}
	}
}

class a63q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		Pattern1 pobj=new Pattern1();

		pobj.Display(str1);
	}
}
