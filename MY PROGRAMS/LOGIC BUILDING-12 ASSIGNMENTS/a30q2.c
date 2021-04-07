/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function).

Input:“Marvellous Multi OS”
	No.:10
Output:Marvellous

*/


#include<stdio.h>

void Strncpy(char *src,char *dest,int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	while((*src!='\0') && (ino!=0))
	{
		*dest=*src;

		src++;
		dest++;
		ino--;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Multi OS";
	char brr[100]={"\0"};
	int ivalue=10;

	Strncpy(arr,brr,ivalue);

	printf("String after copying: %s",brr);

	return(0);
}





