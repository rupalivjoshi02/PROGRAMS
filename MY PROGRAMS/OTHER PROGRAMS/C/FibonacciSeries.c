#include<stdio.h>

void Display(int ino)
{
    int i=0,first=0,second=0,third=0;

    if(ino<0)
    {
        ino=-ino;
    }

    second=1;

    while(i<ino)
    {
        printf("%d\t",first);

        third=first+second;

        first=second;
        second=third;

        i++;
    }
}

int main()
{
    int ivalue=0;

    printf("\nEnter the no.: \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return(0);
}