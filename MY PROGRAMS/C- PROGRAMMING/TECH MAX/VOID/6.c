// Input : 8247
// Output : 7248

void Fun(int ino1)
{
	int idig1=0,idig2=0,ino2=0,i=0,irev=0;

	if(ino1<0)
	{	
		ino1=-ino1;
	}

	ino2=ino1;

	while(ino1>0)
	{
		i++;

		idig1=ino1%10;

		if((i%2)!=0)
		{
			irev=irev*10+idig1;
		}

		ino1=ino1/10;
	}

	while(ino2>0)
	{
		i++;

		idig2=ino2%10;

		if((i%2)==0)
		{
			irev=irev*10+idig2;
		}

		ino2=ino2/10;
	}

	printf("%d",irev);
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Fun(ivalue);

	return(0);
}
