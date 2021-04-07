/* Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.

Input:	N:6
	ino:66
	Elements:85 66 3 66 93 88
Output:	3

Input:	N:6
	ino:93
	Elements:85 66 3 66 93 88
Output:	4

Input:	N:6
	ino:12
	Elements:85 11 3 15 11 111
Output:	-1

*/




import java.util.*;

class LastOccurence
{
	public int Return(int arr[],int ino)
	{
		int i=0;

		for(i=(arr.length-1);i>-1;i--)
		{
			if(arr[i]==ino)
			{
				break;	
			}
		}

		if(i<0)
		{
			return(-1);
		}
		else	
		{
			return(i);
		}
	}
}

class a59q3
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];

		System.out.println("Enter the elemnts: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		System.out.println("Enter the no. to be searched: ");

		int ivalue=sobj.nextInt();

		LastOccurence loobj=new LastOccurence();

		int iret=loobj.Return(arr,ivalue);

		System.out.println("Last occurence is "+iret);
	}
}
