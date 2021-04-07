/* Write Java program which accept array of characters from user and return count of vowels from array.

Input:	b N e B R b A i G i
Output:	4

*/




import java.util.*;

class CountVowelsFromArray
{
	public int Return(char arr[])
	{
		int icnt=0;

		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]=='a') || (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U'))
			{
				icnt++;
			}
		}

		return(icnt);
	}
}

class a69q2
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

		CountVowelsFromArray cvfaobj=new CountVowelsFromArray();

		int iret=cvfaobj.Return(arr);

		System.out.println("Count of vowels from array is "+iret);
	}
}
