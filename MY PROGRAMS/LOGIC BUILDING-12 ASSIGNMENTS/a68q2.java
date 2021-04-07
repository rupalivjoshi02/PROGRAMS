/* Write java program which accept array from user and replace eachmember with summation of its digit.

Input:	89 687 56 549 87 9
Output:	17 21 11 18 15 9

*/




import java.util.*;

class SummationOfNoFromArray
{
	public void Display(int arr[])
	{
		int idig=0,isum=0;

		for(int i=0;i<arr.length;i++)
		{
			while(arr[i]!=0)
			{
				idig=arr[i]%10;
				isum=isum+idig;
				arr[i]=arr[i]/10;
			}

			arr[i]=isum;

			isum=0;

			System.out.print(arr[i]+"\t");
		}		
	}
}

class a68q2
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];	

		System.out.println("Enter the elements of array: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		SummationOfNoFromArray sonfaobj=new SummationOfNoFromArray();

		sonfaobj.Display(arr);
	}
}
