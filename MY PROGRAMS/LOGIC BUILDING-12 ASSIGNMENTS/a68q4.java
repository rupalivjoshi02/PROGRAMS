/* Write java program which accept array of characters from user and count number of capital characters.

Input:	b N j B R b A d G G
Output:	6

*/




import java.util.*;

class CountCapitalCharacterFromArray
{
	public int Return(char arr[])
	{
		int icnt=0;

		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				icnt++;
			}
		}

		return(icnt);		
	}
}

class a68q4
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

		CountCapitalCharacterFromArray cccfaobj=new CountCapitalCharacterFromArray();

		int iret=cccfaobj.Return(arr);

		System.out.println("Capital count from array is "+iret);
	}
}
