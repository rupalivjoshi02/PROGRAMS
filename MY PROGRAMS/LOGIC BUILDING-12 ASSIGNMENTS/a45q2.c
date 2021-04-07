/* Write application which accept file name from user and create that file.

Input:	2.txt
Output:	File created successfully.

*/




#include<stdio.h>
#include<fcntl.h>

void Display(char fname[])
{
	int fd=0;

	fd=creat(fname,O_CREAT);

	if(fd==-1)
	{
		printf("\nUnable to create a file.\n");

		return;
	}

	printf("\n\File created successfully.\n");

	close(fd);
}

int main()
{
	char arr[100]={'\0'};

	printf("\nEnter the file name: \n");
	scanf("%s",arr);

	Display(arr);

	return(0);
}
