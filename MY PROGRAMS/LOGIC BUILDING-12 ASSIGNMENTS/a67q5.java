/*	5. Write a java program which accept two array from user and check whether that array and its elements are palindrome or not.

	Input:	11 252 387783 252 11
	Output:	true

	Input:	11 252 387783 77 11
	Output:	false

	Input:	11 252 786 252 11
	Output:	false	*/




import java.util.*;

class Palindrome
{
	public boolean Boolean(int arr[])
	{
		int irev=0,ino=0,idig=0,i=0,istart=0,iend=0;

		iend=arr.length-1;

		while(istart<iend)
		{
			if(arr[istart]!=arr[iend])
			{
				break;
			}

			istart++;
			iend--;
		}

		for(i=0;i<arr.length;i++)
		{
			ino=arr[i];
			irev=0;

			while(ino!=0)
			{
				idig=ino%10;
				irev=(irev*10)+idig;
				ino=ino/10;
			}

			if(arr[i]!=irev)
			{
				break;
			}
		}

		if((arr[istart]==arr[iend]) && (i==arr.length))
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}		
}

class a67q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements ? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];	

		System.out.println("Enter the elements into array: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		Palindrome pobj=new Palindrome();

		boolean bret=false;

		bret=pobj.Boolean(arr);

		if(bret==true)
		{
			System.out.println("The given array and its elements both are palindrome.");
		}
		else
		{
			System.out.println("The given array and its elements both are not palindrome.");
		}
	}
}
