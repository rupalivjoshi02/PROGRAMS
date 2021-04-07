/* Write Java program which accept array of characters from user and return difference between frequency of capital and frequency of small characters.

Input:	b N e B R b A I O G i
Output:	3 (7-4)

*/




import java.util.*;

class Difference
{
	public int Return(char arr[])
	{
		int icap=0,ismall=0;

		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				icap++;
			}
			else
			{
				ismall++;
			}
		}

		return(icap-ismall);
	}
}

class a69q4
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

		Difference dobj=new Difference();

		int iret=dobj.Return(arr);

		System.out.println("Difference is "+iret);
	}
}
