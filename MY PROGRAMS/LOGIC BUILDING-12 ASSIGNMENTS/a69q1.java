/* Write Java program which accept array of characters from user and replace each capital character with its corresponding small character.

Input:	b N j B R b A d G G
Output:	b n j b r b a d g g

*/




import java.util.*;

class ConvertIntoSmallCase
{
	public void Display(char arr[])
	{
		int temp=0;

		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				temp=(int)arr[i];

				temp=temp+32;

				arr[i]=(char)temp;
			}
		}

		System.out.println("Updated array is ");

		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}	
	}
}

class a69q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		char arr[]=new char[isize];	

		System.out.println("Enter the elements of array: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.next().charAt(0);
		}

		ConvertIntoSmallCase ciscobj=new ConvertIntoSmallCase();

		ciscobj.Display(arr);
	}
}
