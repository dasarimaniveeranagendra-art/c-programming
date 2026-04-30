#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *nxt;
};

typedef struct node SN;

SN *phead=NULL;

void addmiddle(int d)
{
	SN *pnew=(SN *)malloc(sizeof(SN));
	if(pnew==NULL)
	{
		printf("Malloc error\n");
		return;
	}
	pnew->nxt=NULL;
	pnew->data=d;
	
	SN *fast,*slow;
	fast=slow=phead;
	
	SN *ptr=NULL;
	
	while(fast!=NULL&&fast->nxt!=NULL)
	{
		ptr=slow;
		slow=slow->nxt;
		fast=fast->nxt->nxt;
	}
	
	pnew->nxt=ptr->nxt;
	ptr->nxt=pnew;
	return;
}

void addend(int d)
{
	SN *ptrav=phead;
	SN *pnew=(SN *)malloc(sizeof(SN));
	if(pnew==NULL)
	{
		printf("Malloc error\n");
		return;
	}
	pnew->nxt=NULL;
	pnew->data=d;
	
	if(phead==NULL)
	{
		phead=pnew;
		return;
	}
	else
	{
		while(ptrav->nxt!=NULL)
		{
			ptrav=ptrav->nxt;
		}
		ptrav->nxt=pnew;
		return;
	}
}

void display(void)
{
	SN *ptrav=phead;
	while(ptrav!=NULL)
	{
		printf("%d->",ptrav->data);
		ptrav=ptrav->nxt;
	}
	printf("\n");
	return;
}

int main()
{
	addend(10);
	addend(20);
	addend(30);
	addend(40);
	//addend(50);
	display();
	addmiddle(35);
	display();
}
