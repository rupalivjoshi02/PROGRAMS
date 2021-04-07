/* Write java program which accept N numbers from user and accept Range, Display all elements from that range.

Input:	N:6
	istart:60
	iend:90
	Elements:85 66 3 76 93 88
Output:	85 66 76 88

Input:	N:6
	istart:30
	iend:50
	Elements:85 66 3 76 93 88
Output:	

*/




import java.util.*;

class Range
{
	public void Display(int arr[],int istart,int iend)
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>istart) && (arr[i]<iend))
			{
				System.out.print(arr[i]+"\t");
			}
		}
	}
}

class a59q4
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];
		
		System.out.println("Enter the range: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		System.out.println("Enter the elements: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		Range robj=new Range();

		robj.Display(arr,ivalue1,ivalue2);
	}
}
