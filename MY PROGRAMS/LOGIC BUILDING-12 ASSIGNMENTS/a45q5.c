/* Write application which accept file name from user and one string from user. Write that string at the end of file.

Input:	5.txt
Output:	Hello World

*/




#include<stdio.h>
#include<fcntl.h>

void Display(char fname[],char str[])
{
	int fd=0;

	fd=open(fname,(O_WRONLY | O_APPEND));

	if(fd==-1)
	{
		printf("\nUnable to open a file.\n");

		return;
	}

	printf("\nFile opened successfully.\n");

	write(fd,str,strlen(str));

	close(fd);
}

int main()
{
	char name[100]={'\0'},arr[100]={'\0'};

	printf("\nEnter the file name: \n");
	scanf("%s",name);

	printf("\nEnter the string: \n");
	scanf(" %[^\n]",arr);

	Display(name,arr);

	return(0);
}
