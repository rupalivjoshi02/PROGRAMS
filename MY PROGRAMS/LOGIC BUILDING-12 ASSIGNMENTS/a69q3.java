/* Write Java program which accept array of characters from user and accept one character. Return occurrence of that character without considering case.

Input:	b b N e B R b A i G i B
Output:	4

*/




import java.util.*;

class OccurenceOfCharacterFromArray
{
	public int Return(char arr[],char ch)
	{
		int i=0,temp=0,temp2=0,icnt=0;

		temp2=(int)ch;

		for(i=0;i<arr.length;i++)
		{
			temp=(int)arr[i];

			if((temp==temp2) || ((temp-temp2)==-32) || ((temp-temp2)==32))
			{
				icnt++;
			}
		}

		return(icnt);
	}
}

class a69q3
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

		System.out.println("Enter the character: ");

		char cvalue=sobj.next().charAt(0);

		OccurenceOfCharacterFromArray oocfaobj=new OccurenceOfCharacterFromArray();

		int iret=oocfaobj.Return(arr,cvalue);

		System.out.println("Occurence of the character from array is "+iret);
	}
}
