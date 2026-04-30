#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *nxt;
};

struct node *phead=NULL;

void appendnode(int d)
{
	struct node *pnew,*ptrav;
	pnew=(struct node *)malloc(sizeof(struct node));
	if(pnew==NULL)
	{
		printf("Malloc Error\n");
		return;
	}
	pnew-> data=d;
	pnew-> nxt=NULL;
	if(phead==NULL)
	{
		printf("The list is empty so adding %d as 1st node.\n",d);
		phead=pnew;
	}
	else
	{
		ptrav=phead;
		while(ptrav->nxt!=NULL)
		{
			ptrav=ptrav->nxt;	
		}
		ptrav->nxt=pnew;
		return;
	}
}

void displaylist()
{
	struct node *ptrav;
	ptrav=phead;
	if(ptrav==NULL)
	{
		printf("List is empty, No nodes to display\n");
		return;
	}
	else
	{
		int i=0;
		while(ptrav!=NULL)
		{
			printf("%d %dth node\n",ptrav->data,i+1);
			ptrav=ptrav->nxt;
			i++;
		}
		//printf("\n");
		printf("Total number of nodes in the list are: %d\n\n",i);
		return;
	}
}

void search(int d)
{
	struct node *ptrav=phead;
	int i=1;
	while(ptrav!=NULL&&ptrav->data!=d)
	{
		i++;
		ptrav=ptrav->nxt;
	}
	if(ptrav==NULL)
	{
		printf("Data not found in any node\n");
	}
	else
	{
		printf("The data %d is found at %dth node\n",d,i);
	}
	return;
}

void deleteendnode()
{
	struct node *ptrav,*prev;
	ptrav=phead;
	prev=NULL;
	if(ptrav==NULL)
	{
		printf("The list is empty mo nodes to delete\n");
		return;
	}
	else if(ptrav->nxt==NULL)
	{
		printf("The list contains only 1 node, Deleting the lone node:\n");
		free(ptrav);
		phead=NULL;
	}
	else
	{
		while(ptrav->nxt!=NULL)
		{
			prev=ptrav;
			ptrav=ptrav->nxt;
		}
		prev->nxt=NULL;
		free(ptrav);
	}
	return;
}

void deleteheadnode()
{
	struct node *ptemp;
	ptemp=phead;
	if(ptemp==NULL)
	{
		printf("THe list is empty\n");
		return;
	}
	else if(ptemp->nxt==NULL)
	{
		printf("The list has only 1 node, deleting it and makes the empty list.\n");
		free(ptemp);
		return;
	}
	else
	{
		phead=ptemp->nxt;
		free(ptemp);
		return;
	}
}

void insert(int i,int d)
{
	struct node *pnew,*ptrav,*prev;
	pnew=(struct node *)malloc(sizeof(struct node));
	if(pnew==NULL)
	{
		printf("Malloc Error\n");
		return;
	}
	pnew->data=d;
	pnew->nxt=NULL;
	if(i==1)
	{
		if(phead==NULL)
		{
			printf("List is empty\nAdding the node as first node\n");
			phead=pnew;
		}
		else
		{
			pnew->nxt=phead;
			phead=pnew;
		}
		return;
	}
	ptrav=phead;
	prev=NULL;
	int j=1;
	while(ptrav!=NULL)
	{
		if(i!=j)
		{
			prev=ptrav;
			ptrav=ptrav->nxt;
			j++;
		}
		else if(i==j)
		{
			break;
		}
	}
	if(ptrav==NULL)
	{
		printf("Given index is outside list size so adding the node as last node\n");
	}
	prev->nxt=pnew;
	pnew->nxt=ptrav;
	return;
	
	/*ptrav = phead;
	prev = NULL;
	int j = 1;

	while (ptrav != NULL && j < i)
	{
		prev = ptrav;
		ptrav = ptrav->nxt;
		j++;
	}

	if (j != i)
	{
		printf("Given index %d is beyond list size. Adding at the end.\n", i);
	}

	// insert between prev and ptrav
	prev->nxt = pnew;
	pnew->nxt = ptrav;*/
}

void addheadnode(int d)
{
	struct node *pnew;
	pnew=(struct node *)malloc(sizeof(struct node));
	if(pnew==NULL)
	{
		printf("Malloc failure\n");
		return;
	}
	pnew->data=d;
	pnew->nxt=NULL;
	if(phead==NULL)
	{
		printf("List is empty adding the node as first node\n");
		phead=pnew;
		return;
	}
	else
	{
		pnew->nxt=phead;
		phead=pnew;
		return;
	}
}

void addnode(int d)
{
	struct node *pnew,*ptrav,*prev;
	pnew=(struct node *)malloc(sizeof(struct node));
	if(pnew==NULL)
	{
		printf("Malloc error\n");
		return;
	}
	pnew->data=d;
	pnew->nxt=NULL;
	if(phead==NULL)
	{
		printf("List is empty adding as 1st node\n");
		phead=pnew;
	}
	else
	{
		ptrav=phead;
		prev=ptrav;
		while(d>ptrav->data&&ptrav!=NULL)
		{
			prev=ptrav;
			ptrav=ptrav->nxt;
		}
		pnew->nxt=ptrav;
		prev->nxt=pnew;
	}
	return;
}

void deletenode(int d)
{
	struct node *ptrav,*prev;
	if(phead==NULL)
	{
		printf("List is empty\n");
	}
	else if(phead->data==d)
	{
		ptrav=phead;
		phead=phead->nxt;
		free(ptrav);
	}
	else
	{
		ptrav=phead;
		prev=NULL;
		while(d!=ptrav->data&&ptrav!=NULL)
		{
			prev=ptrav;
			ptrav=ptrav->nxt;
		}
		if(ptrav==NULL)
		{
			printf("Data does not exist\n");
		}
		else
		{
		prev->nxt=ptrav->nxt;
		free(ptrav);
		}
	}
	return;
}

void deleteallnodeswithdata(int d)
{
    struct node *ptrav,*prev;
    if(phead->data==d)
    {
        ptrav=phead;
        phead=phead->nxt;
        free(ptrav);
    }
    prev=NULL;
    ptrav=phead;
    while(ptrav!=NULL)
    {
        if(ptrav->data==d)
        {
            prev->nxt = ptrav->nxt;
            free(ptrav);
            ptrav = prev->nxt;
        }
        else
        {
            prev = ptrav;
            ptrav = ptrav->nxt;
        }
    }
}

void delete(int i)
{
	struct node *ptrav=phead,*prev=NULL;
	if(phead==NULL)
	{
		printf("List is empty\n");
		return;
	}
	if(i==1)
	{
		phead=phead->nxt;
		free(ptrav);
	}
	else
	{
		int j=1;
		while(ptrav!=NULL && j<i)
		{
			prev=ptrav;
			ptrav=ptrav->nxt;
			j++;
		}
		if(ptrav==NULL)
		{
			printf("Specified node doesnt exist\n");
			return;
		}
		prev->nxt=ptrav->nxt;
		free(ptrav);
		printf("Succesfully removed node at %d position\n",j);
	}
	return;
}

int main()
{
	appendnode(10);
	appendnode(20);
	appendnode(30);
	appendnode(40);
	appendnode(50);
	displaylist();
	insert(1,5);
	insert(3,15);
	insert(5,25);
	insert(7,35);
	insert(9,45);
	insert(12,55);
	displaylist();
	delete(1);
	delete(3);
	delete(7);
	delete(15);
	displaylist();
	deleteendnode();
	displaylist();
	addheadnode(5);
	displaylist();
	deleteheadnode();
	displaylist();
	addnode(35);
	appendnode(40);
	appendnode(40);
	displaylist();
	deletenode(35);
	displaylist();
	deleteallnodeswithdata(40);
	displaylist();
	search(20);
	search(10);
	search(50);
	return 0;
}
