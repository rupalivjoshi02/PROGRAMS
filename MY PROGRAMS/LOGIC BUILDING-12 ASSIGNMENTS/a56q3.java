/* Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input:	“MarvellouS”
Output:	6 (8-2)

*/




import java.util.*;

class Difference
{
	public int Return(String str)
	{
		int i=0,icap=0,ismall=0;
		char arr[]=str.toCharArray();

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				ismall++;
			}
			else if((arr[i]>='A') && (arr[i]<='Z'))
			{
				icap++;
			}
		}

		return(ismall-icap);
	}
}

class a56q3
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		Difference dobj=new Difference();

		int iret=dobj.Return(str1);

		System.out.println("Difference between capital and small case in the given string is "+iret);              
	}
}
