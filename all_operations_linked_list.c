#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    
};
struct node *head=NULL;
void creatnode()
{
    int d;
    struct node *new,*ptrav;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory error");
        return;
    }
    printf("enter data:");
    scanf("%d",&d);
    new->data=d;
    new->next=NULL;
    
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        ptrav=head;
        while(ptrav->next!=NULL)
        {
            ptrav=ptrav->next;
        }
        ptrav->next=new;
    }
}
struct node *add_at_mid(struct node *head,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
		temp->next=NULL;
		if(head==NULL)
		{
			return temp;
		}
    struct node *slow=head,*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=slow->next;
    slow->next=temp;
    return head;
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
    printf("NULL\n");
}
int main()
{
    int data;
    creatnode();
    creatnode();
    creatnode();
    display();
    printf("enter the data u want to insert at:");
    scanf("%d",&data);
		head=add_at_mid(head,data);
    display();
}