/*	1. Write a program which accept name from user and print that name.

	Input:	"Rupali Vinod Joshi"
	Output:	Rupali Vinod Joshi	*/




import java.util.*;
import java.io.*;
import java.lang.*;

class Assignment6
{
	public void Display(String str)
	{
		char arr[]=str.toCharArray();

		System.out.println(arr);
	}
}

class a6q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		String str;

		System.out.println("Enter the string: ");
		str=sobj.nextLine();

		Assignment6 aobj=new Assignment6();

		aobj.Display(str);
	}
}
