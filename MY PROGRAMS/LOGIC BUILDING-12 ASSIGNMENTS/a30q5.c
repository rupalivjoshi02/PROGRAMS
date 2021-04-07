/* Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).

Input:“Marvellous Infosystems”
      “Logic Building”
Output:“Marvellous Infosystems Logic Building”

*/



#include<stdio.h>

void Str(char *src,char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		src++;
	}

	while(*dest!='\0')
	{
		*src=' ';
		*src=*dest;
		
		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[100]="Marvellous Multi OS";
	char brr[100]=" Logic Building";

	Str(arr,brr);

	printf("Concatenated string is\n %s",arr);

	return(0);
}



      



