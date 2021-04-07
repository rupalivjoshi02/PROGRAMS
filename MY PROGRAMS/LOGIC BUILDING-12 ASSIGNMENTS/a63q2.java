/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	Hello
Output:	H e l l o
	H e l l 
	H e l 
	H e 
	H

*/




import java.util.*;

class Pattern2
{
	public void Display(String str)
	{
		int i=0,j=0;
		char arr[]=str.toCharArray();

		for(i=arr.length;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				System.out.print(arr[j]+"\t");
			}

			System.out.println();
		}
	}
}

class a63q2
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		Pattern2 pobj=new Pattern2();

		pobj.Display(str1);
	}
}
