/* Write application which accept file name from user and open that file in read mode.

Input:	1.txt
Output:	File opened successfully.

*/




#include<stdio.h>
#include<fcntl.h>

void Display(char fname[])
{
	int fd=0;

	fd=open("a45q1.txt",O_RDONLY);

	if(fd==-1)
	{
		printf("\nUnable to open a file.\n");

		return;
	}

	printf("\n\File opened successfully.\n");

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
