/*	2. Accept single digit number from user and print it into word.

	Input:	9
	Output:	Nine

	Input:	-3
	Output:	Three

	Input:	12
	Output:	Invalid Input	*/




import java.util.*;

class Assignment8
{
	public void Display(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}

		if(ino>9)
		{
			System.out.println("Ivalid input");
		}

		switch(ino)
		{
			case 1:
				if(ino==0)
				{
					System.out.println("Zero");

					break;
				}

			case 2:
				if(ino==1)
				{
					System.out.println("One");

					break;
				}

			case 3:
				if(ino==2)
				{
					System.out.println("Two");

					break;
				}

			case 4:
				if(ino==3)
				{
					System.out.println("Three");

					break;
				}

			case 5:
				if(ino==3)
				{
					System.out.println("Four");

					break;
				}

			case 6:
				if(ino==5)
				{
					System.out.println("Five");

					break;
				}

			case 7:
				if(ino==6)
				{
					System.out.println("Six");

					break;
				}

			case 8:
				if(ino==7)
				{
					System.out.println("Seven");

					break;
				}

			case 9:
				if(ino==8)
				{
					System.out.println("Eight");

					break;
				}

			case 10:
				if(ino==9)
				{
					System.out.println("Nine");

					break;
				}
		}
	}
}

class a8q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment8 aobj=new Assignment8();

		aobj.Display(ivalue);
	}
}
