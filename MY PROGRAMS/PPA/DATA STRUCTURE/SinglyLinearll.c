#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct NODE
{
	int data;

	struct NODE *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,int);
void Display(PNOE);
int Count(PNODE);
void InsertLast(PPNODE,int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void InsertAtPosition(PPNODE,int,int);
void DeleteAtPosition(PPNODE,int);

int main()
{
	PNODE head=NULL;
	int iret=0;

	InsertFirst(&head,30);
	InsertFirst(&head,20);
	InsertFirst(&head,10);
	Display(head);

	iret=Count(head);

	printf("\n%d \n",iret);

	InsertLast(&head,40);
	InsertLast(&head,50);
	Display(head);
	DeleteFirst(&head);
	Display(head);
	DeleteLast(&head);
	Display(head);
	InsertAtPosition(&head,10,1);
	InsertAtPosition(&head,35,4);
	Display(head);
	DeleteAtPosition(&head,4);
	DeleteAtPosition(&head,4);
	Display(head);

	return(0);
}

void InsertFirst(PPNODE first,int ino)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));
}
