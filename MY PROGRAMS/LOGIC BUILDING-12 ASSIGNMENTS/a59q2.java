/* Write java program which accept N numbers from user and accept one another number as NO , return index of 1st occurrence of that NO.

Input:	N:6
	ino:66
	Elements:85 66 3 66 93 88
Output:	1

Input:	N:6
	ino:12
	Elements:85 11 3 15 11 111
Output:	-1

*/




import java.util.*;

class FirstOccurence
{
	public int Return(int arr[],int ino)
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
			return(-1);
		}
		else	
		{
			return(i);
		}
	}
}

class a59q2
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

		FirstOccurence foobj=new FirstOccurence();

		int iret=foobj.Return(arr,ivalue);

		System.out.println("First occurence is "+iret);
	}
}
