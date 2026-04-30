#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head =NULL;
void creat(int d)
{
	struct node *new,*ptrav;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("malloc error");
		return;
	}
	new->data=d;
	new->next=NULL;
	if(head==NULL){
		head=new;
	}
	else{
		ptrav=head;
		while(ptrav->next!=NULL)
		{
			ptrav=ptrav->next;
		}
		ptrav->next=new;
	}
}
void addatbeg(int d)
{
	struct node *pnew;
	pnew=(struct node*)malloc(sizeof(struct node ));
	pnew->data=d;
	pnew->next=head;
	head=pnew;
}
void display()
{
	struct node *ptrav;
	ptrav=head;
	while(ptrav!=NULL)
	{
		printf("%d->",ptrav->data);
		ptrav=ptrav->next;
	}
	printf("\n");
}
int main()
{
	creat();
	creat();
	creat();
	display();
	addatbeg();
	display(); 
}

