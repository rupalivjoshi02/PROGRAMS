/* Write java program which accept marks of N students from user and display class of each student.

Less than 35 :	Fail
Less than 50 :	Pass class
Less than 60 :	Second class	
Less than 70 :	First class
Greater than 70 : First class with Distinction

Input:	67.3 45.8 88.9 77.5 55.2
Output:	67.3 : First class
	45.8 : Pass class
	88.9 : First class with Distinction
	77.5 : First class with Distinction
	55.2 : Second class

*/




import java.util.*;

class ClassOfStudent
{
	public void Display(float arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]<35)
			{
				System.out.println(arr[i]+" : Student is failed.");
			}
			else if((arr[i]>=35) && (arr[i]<50))
			{
				System.out.println(arr[i]+" : Student got pass class.");
			}
			else if((arr[i]>=50) && (arr[i]<60))
			{
				System.out.println(arr[i]+" : Student got 2nd class.");
			}
			else if((arr[i]>=60) && (arr[i]<70))
			{
				System.out.println(arr[i]+" : Student got 1st class.");
			}
			else if((arr[i]>=70) && (arr[i]<=100))
			{
				System.out.println(arr[i]+" : Student got 1st class with distinction.");
			}
			else
			{
				System.out.println("Invalid input.");
			}
		}	
	}
}

class a68q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements ? ");

		int isize=sobj.nextInt();
		float arr[]=new float[isize];

		System.out.println("Enter the elements: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextFloat();
		}

		ClassOfStudent cosobj=new ClassOfStudent();

		cosobj.Display(arr);
	}
}
