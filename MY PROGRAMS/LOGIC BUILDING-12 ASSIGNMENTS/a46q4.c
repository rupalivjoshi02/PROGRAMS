/* Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.

Input:	Fname:4.txt
	Character:'M'
Output:	Frequency of M is 13

*/




#include<stdio.h>
#include<fcntl.h>

#define BLOCKSIZE 1000000

int Return(char fname[],char ch)
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

	printf("\nData from file is %s\n",arr);

	for(i=0;i<=BLOCKSIZE;i++)
	{
		if(arr[i]==ch)
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
	char cvalue='\0';
	int iret=0;

	printf("\nEnter the file name: \n");
	scanf("%s",name);

	printf("\nEnter the characters: \n");
	scanf(" %c",&cvalue);

	iret=Return(name,cvalue);

	printf("\nFreq. of %c is %d\n",cvalue,iret);

	return(0);
}
