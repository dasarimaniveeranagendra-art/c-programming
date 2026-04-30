#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *nxt;
};

typedef struct node SN;

SN *phead=NULL;

void create(int d)
{
	SN *ptrav=phead;
	SN *pnew=(SN *)malloc(sizeof(SN));
	if(pnew==NULL)
	{
		printf("Malloc Failure\n");
		return;
	}
	pnew->data=d;
	pnew->nxt=NULL;
	if(phead==NULL)
	{
		phead=pnew;
		return;
	}
	while(ptrav->nxt!=NULL)
	{
		ptrav=ptrav->nxt;
	}
	ptrav->nxt=pnew;
	return;
}

void display(void)
{
	SN *ptrav=phead;
	if(phead==NULL)
	{
		printf("LIst is empty\n");
		return;
	}
	while(ptrav!=NULL)
	{
		printf("%d->",ptrav->data);
		ptrav=ptrav->nxt;
	}
	printf("\n");
	return;
}

void loop(int inf)
{
	SN *ptrav=phead,*temp;
	int count=0;
	while(count!=inf)
	{
		ptrav=ptrav->nxt;
		count++;
	}
	temp=ptrav;
	ptrav=phead;
	while(ptrav->nxt!=NULL)
	{
		ptrav=ptrav->nxt;
	}
	ptrav->nxt=temp;
	return;
}

int loopdetect()
{
	SN *slow, *fast;
	slow=fast=phead;
	while(fast!=NULL&&fast->nxt!=NULL)
	{
		slow=slow->nxt;
		fast=fast->nxt->nxt;
		if(slow==fast)
		{
			return 1;
		}
	}
	return 0;
}

void loopbreak()
{
	SN *slow, *fast;
	slow=fast=phead;
	while(fast && fast->nxt)
	{
        	slow = slow->nxt;
        	fast = fast->nxt->nxt;
        	if(slow == fast)
		break;
    	}
	if(slow != fast)
        	return;
	
	slow = phead;

	if(slow == fast) // Special case when loop starts at head
    {
        while(fast->nxt != slow)
            fast = fast->nxt;
        fast->nxt = NULL;
        return;
    }

    while(slow->nxt != fast->nxt)
    {
        slow = slow->nxt;
        fast = fast->nxt;
    }

    // Step 4: Break loop
    fast->nxt = NULL;
}


int main()
{
	int n,d,inf,loop_detect;
	printf("Enter number of nodes you want to insert\n");
	scanf("%d",&n);
	printf("Enter values for each node\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&d);
		create(d);
	}
	display();
	printf("Enter a node number to create a loop\n");
	scanf("%d",&inf);
	loop(inf);
	loop_detect=loopdetect();
	if(loop_detect==1)
	{
		printf("Loop is detected\n");
		//loop_break();
	}
	else
	{
		printf("Loop is not detected\n");
		//display();
	}
	return 0;
}
