import java.util.*;

class Demo
{
	public boolean Boolean(String str)
	{
		int i=0,istart=0,iend=0;
		char arr[]=str.toCharArray();

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

		if(arr[istart]!=arr[iend])
		{
			return(false);
		}
		else
		{
			return(true);
		}
	}
}

class StrPalindrome
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the string: ");

		String str=sobj.nextLine();

		boolean bret=false;

		Demo dobj=new Demo();

		bret=dobj.Boolean(str);

		if(bret==true)
		{
			System.out.println("YES,the given string is palindrome.");
		}
		else
		{
			System.out.println("NO,the given string is not palindrome.");
		}
	}
}

