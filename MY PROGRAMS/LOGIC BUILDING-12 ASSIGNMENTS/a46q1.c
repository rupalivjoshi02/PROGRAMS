/* Write a program which accepts file name from user and count number of capital characters from that file.

Input:	Fname:1.txt
Output:	Number of scapital characters are 351

*/




#include<stdio.h>
#include<fcntl.h>

#define BLOCKSIZE 1000000

int Return(char fname[])
{
	int fo=0,ir=0,i=0,icnt=0;
	char arr[BLOCKSIZE]={'\0'};

	fo=open(fname,O_RDONLY);

	if(fo==-1)
	{
		printf("\nUnable to open a file.\n");

		return;
	}

	printf("\nFile opened successfully.\n");

	ir=read(fo,arr,BLOCKSIZE);

	if(ir==-1)
	{
		printf("\nUnable to read the data from file.\n");

		close(fo);

		return;
	}

	printf("\nRead the data from file successfully.\n");

	for(i=0;i<=BLOCKSIZE;i++)
	{
		if((arr[i]>='A') && (arr[i]<='Z'))
		{
			icnt++;
		}
	}
	
	close(fo);

	return(icnt);
}

int main()
{
	char name[100]={'\0'};
	int iret=0;

	printf("\nEnter the file name: \n");
	scanf("%s",name);

	iret=Return(name);

	printf("\nNo. of capital characters from file are %d\n",iret);

	return(0);
}
