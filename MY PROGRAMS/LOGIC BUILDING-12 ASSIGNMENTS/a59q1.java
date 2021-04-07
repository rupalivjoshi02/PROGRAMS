/* Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not.

Input:	N:6
	ino:66
	Elements:85 66 3 66 93 88
Output:	true

Input:	N:6
	ino:12
	Elements:85 11 3 15 11 111
Output:	false

*/




import java.util.*;

class PresenceOfNo 
{
	public boolean Boolean(int arr[],int ino)
	{
		int i=0;

		for(i=0;i<arr.length;i++)
		{
			if(arr[i]==ino)
			{
				break;	
			}
		}

		if(i==arr.length)
		{
			return(false);
		}
		else	
		{
			return(true);
		}
	}
}

class a59q1
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

		PresenceOfNo ponobj=new PresenceOfNo();

		boolean bret=ponobj.Boolean(arr,ivalue);

		if(bret==true)
		{
			System.out.println("No. is present.");
		}
		else
		{
			System.out.println("No. is not present.");
		}
	}
}
