/* Write a program which accepts file name and one count from user and read that number of characters from starting position.

Input:	Fname:5.txt
	Bytes:12
Output:	Display first 12 characters from Demo.txt

*/




#include<stdio.h>
#include<fcntl.h>

void Display(char fname[],int isize)
{
	int fo=0,ir=0,i=0;
	char arr[100]={'\0'};

	fo=open(fname,O_RDONLY);

	if(fo==-1)
	{
		printf("\nUnable to open a file.\n");

		return;
	}

	printf("\nFile opened successfully.\n");

	ir=read(fo,arr,100);

	if(ir==-1)
	{
		printf("\nUnable to read the data from file.\n");

		close(fo);

		return;
	}
	
	for(i=0;i<=isize;i++)
	{
		printf("%c",arr[i]);
	}
	
	close(fo);
}

int main()
{
	char name[100]={'\0'};
	int ivalue=0;

	printf("\nEnter the file name: \n");
	scanf("%s",name);

	printf("\nEnter the no. of bytes: \n");
	scanf("%d",&ivalue);

	Display(name,ivalue);

	return(0);
}
