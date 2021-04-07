/* Write application which accept file name from user and read all data from that file and display contents on screen.

Input:	3.txt
Output:	Display all data from the file

*/




#include<stdio.h>
#include<fcntl.h>

int main()
{
	char fname[100]={'\0'},arr[100]={'\0'};
	int iret=0,fd=0;

	printf("\nEnter the file name: \n");
	scanf("%s",fname);

	fd=open(fname,O_CREAT);

	if(fd==-1)
	{
		printf("\nUnable to create the file.\n");
	
		return(-1);
	}

	printf("\nFile created successfully.\n");
	
	iret=read(fd,arr,100);

	if(iret==-1)
	{
		printf("\nUnable to read the data from file.\n");

		close(fd);

		return(-1);
	}

	printf("\nDisplayed all the data from file successfully.\n");

	printf("\nData from file is %s \n",arr);

	close(fd);

	return(0);
}
