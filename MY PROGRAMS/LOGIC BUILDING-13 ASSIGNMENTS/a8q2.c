/* Accept single digit number from user and print it into word.

Input:9
Output:Nine

Input:-3
Output:Three

Input:12
Output:Invalid no.

*/




void Display(int idig)
{
	if(idig<0)
	{
		idig=-idig;
	}

	if(idig>9)
	{
		printf("Invalid no.");
	}

	switch(idig)
	{
		case 0:	printf("Zero");
			
			break;

		case 1:	printf("One");
			
			break;

		case 2:	printf("Two");
			
			break;

		case 3:	printf("Three");
			
			break;
	
		case 4:	printf("Four");
			
			break;

		case 5:	printf("Five");
			
			break;

		case 6:	printf("Six");
			
			break;

		case 7:	printf("Seven");
			
			break;

		case 8:	printf("Eight");
			
			break;

		case 9:	printf("Nine");
			
			break;
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
