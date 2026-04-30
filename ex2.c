#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void createnode()
{
    int d;
    struct node *new,*ptrav;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&d);
    if(new==NULL)
    {
        printf("memory failed");
        return;
    }
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
void nodeatbeg()
{
    int d;
    struct node *head,*new;
    new=malloc(sizeof(struct node));
    printf("enter the data u wnat to inserta t beg:");
    scanf("%d",&new->data);
    printf("%d->",new->data);
    new->data=d;
    new->next=head;
    head=new;
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
    createnode();
    createnode();
    createnode();
    display();
    nodeatbeg();
    display();
    
}











