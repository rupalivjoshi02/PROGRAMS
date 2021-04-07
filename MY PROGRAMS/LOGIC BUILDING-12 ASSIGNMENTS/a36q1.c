/* Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function).

Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input:	"Marvellous Infosystem"
	"Logic Building"
	No.:5
Output:	Marvellous Infosystem Logic
	
*/




#include<stdio.h>

void Concate(char *src,char *dest,int ino)
{
	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	if(ino<0)
	{
		ino=-ino;
	}

	while(*src!='\0')
	{
		src++;
	}

	while((*dest!='\0') && (ino!=0))
	{
		*src=*dest;

		dest++;
		src++;
		ino--;
	}

	*src='\0';
}

int main()
{
	char arr[100]="Marvellous Infosystem";
	char brr[100]="Logic Building";
	int ivalue=5;

	Concate(arr,brr,ivalue);

	printf("Conactenated string is %s ",arr);

	return(0);
}







