/*	3. Design application for school management system.As school is primary there are 4 standards from 1 to 4.School fees of each standard 		is different.For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 		23450.We have to accept standard from user and display the corresponding fees.

	Input:	2
	Output:	12790

	Input:	4
	Output:	23450

	Input:	6
	Output:	Wrong input	*/




import java.util.*;

class Assignment4
{
	public void Display(int istd)
	{
		switch(istd)
		{
			case 1:
				if(istd==1)
				{
					System.out.println("Fess for standard "+istd+" is 8900 Rs. only.");

					break;
				}

			case 2:
				if(istd==2)
				{
					System.out.println("Fess for standard "+istd+" is 12790 Rs. only.");

					break;
				}	

			case 3:
				if(istd==3)
				{
					System.out.println("Fess for standard "+istd+" is 21000 Rs. only.");

					break;
				}

			case 4:
				if(istd==4)
				{
					System.out.println("Fess for standard "+istd+" is 23450 Rs. only.");

					break;
				}

			case 5:
				if(istd>4)
				{
					System.out.println("Wrong input");

					break;
				}			
		}
	}
}

class a4q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter standard of the student: ");
		ivalue=sobj.nextInt();

		Assignment4 aobj=new Assignment4();

		aobj.Display(ivalue);
	}
}
