#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
struct node* head=NULL;
void create()
{
  int d;
  struct node *new,*ptrav;
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter the data:");
  scanf("%d",&d);
  if(new==NULL)
  {
    new=head;
  }
  new->data=d;
  new->next=NULL;
  if(head==NULL)
  {
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
  return;
}
void revnode()
{
  struct node *prev,*current,*nextnode;
  prev=NULL;
  current=nextnode=head;
  while(nextnode!=NULL)
  {
    nextnode=nextnode->next;
    current->next=prev;
    prev=current;
    current=nextnode;
  }
  head=prev;
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
  create();
  create();
  create();
  display();
  printf("after reversing the node:\n");
  revnode();
  display();
}