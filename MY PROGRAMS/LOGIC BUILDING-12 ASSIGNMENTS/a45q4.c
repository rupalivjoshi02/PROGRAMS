/* Write application which accept file name from user and display size of file.

Input:	4.txt
Output:	Size of the file is 56 bytes

*/




#include<stdio.h>
#include<fcntl.h>

int main()
{
	char fname[100]={'\0'};
	int iret=0,fd=0;

	printf("\nEnter the file name: \n");
	scanf("%s",fname);

	fd=open(fname,O_RDONLY);

	if(fd==-1)
	{
		printf("\nUnable to open a file.\n");
	
		return(-1);
	}

	printf("\nFile opened successfully.\n");
	
	iret=ftell(fd);

	printf("\nSize of the file is %d \n",iret);

	close(fd);

	return(0);
}
