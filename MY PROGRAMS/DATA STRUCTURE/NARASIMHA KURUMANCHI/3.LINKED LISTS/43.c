#include<stdio.h>
#include<malloc.h>

struct Node
{
	int data;
	
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void CreateLinkedList(PPNODE first,int ino)
{
	PNODE new=NULL;

	new=(PNODE)malloc(sizeof(PNODE));

	new->data=ino;
	new->next=NULL;

	if(*first==NULL)
	{
		*first=new;
	}
	else
	{
		new->next=*first;
		*first=new;
	}
}

void Display(PNODE first)
{
	while(first!=NULL)
	{
		printf("%d\t",first->data);

		first=first->next;
	}
}

int CountNode(PNODE first)
{
	int icnt=0;
	PNODE i=first;

	for(i=first;i!=NULL;i=i->next)
	{
		icnt++;
	}

	return(icnt);
}

int main()
{
	PNODE head=NULL;
	int iret=0;

	Print(&head,101);
	Print(&head,51);
	Print(&head,21);
	Print(&head,11);
	Print(&head,0);

	Display(head);

	iret=CountNode(head);

	printf("\nTotal no. of nodes are %d\n",iret);

	return(0);
}

