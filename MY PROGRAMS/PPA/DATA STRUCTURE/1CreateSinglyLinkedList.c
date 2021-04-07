#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int data;

	struct Node *next;
};

struct Node *head=NULL;

void CreateLinkedList(int n)
{
	struct Node *new=NULL;
	struct Node *first=NULL;

	int idata=0,i=0;
	
	if(n<0)
	{
		n=-n;
	}

	new=(struct Node *)malloc(sizeof(struct Node));

	if(new==NULL)
	{
		printf("\nUnable to allocate a memory.\n");
	}
	else
	{
		printf("\nEnter 1st node:\n");
		scanf("%d",&idata);

		new->data=idata;
		new->next=NULL;

		head=new;
	}

	for(i=2;i<=n;i++)
	{
		first=(struct Node *)malloc(sizeof(struct Node));

		if(first==NULL)
		{
			printf("\nUnable to allocate memory.\n");
		
			break;
		}
		else
		{
			printf("\nEnter the %d row:\n",i);
			scanf("%d",&idata);

			first->data=idata;
			first->next=NULL;
			new->next=first;

			new=first;
		}
	}
}

void DisplayLinkedList()
{
	struct Node *first=NULL;

	first=head;

	while(first!=NULL)
	{			
		printf("%d ===>\t",first->data);
		
		first=first->next;
	}	
}

int main()
{
	int n=0;

	printf("\nHow many node ?\n");
	scanf("%d",&n);

	CreateLinkedList(n);
	
	printf("\nDisplay created singly linear linked list.\n");
	
	DisplayLinkedList();

	return(0);
}

/*
//	BY MARVELLOUS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int data;

	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;

void CreateLinkedList(int);
void DisplayLinkedList();

PNODE head=NULL;

void CreateLinkedList(int n)
{
	PNODE new=NULL,first=NULL;

	int idata=0,i=0;

	if(n<0)
	{
		n=-n;
	}

	new=(PNODE)malloc(sizeof(NODE));

	if(new==NULL)
	{
		printf("\nUnable to allocate a memory.\n");
	}
	else
	{
		printf("\nEnter 1st node:\n");
		scanf("%d",&idata);

		new->data=idata;
		new->next=NULL;

		head=new;
	}

	for(i=2;i<=n;i++)
	{
		first=(PNODE)malloc(sizeof(NODE));

		if(first==NULL)
		{
			printf("\nUnable to allocate memory.\n");
		
			break;
		}
		else
		{
			printf("\nEnter the %d row:\n",i);
			scanf("%d",&idata);

			first->data=idata;
			first->next=NULL;
			new->next=first;

			new=first;
		}
	}
}

void DisplayLinkedList()
{
	PNODE first=NULL;

	first=head;

	while(first!=NULL)
	{			
		printf("%d ===>\t",first->data);
		
		first=first->next;
	}	
}

int main()
{
	int n=0;

	printf("\nHow many node ?\n");
	scanf("%d",&n);

	CreateLinkedList(n);
	
	printf("\nDisplay created singly linear linked list.\n");
	
	DisplayLinkedList();

	return(0);
}*/

