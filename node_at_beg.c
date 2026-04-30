#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;
void create(int d)
{
  struct node *pnew,*ptrav;
  pnew=(struct node*)malloc(sizeof(struct node));
  if(pnew==NULL)
  {
    printf("malloc error");
    return;
  }
  pnew->data=d;
  pnew->next=NULL;
  if(head==NULL)
  {
    printf("node\n");
    head=pnew;
  }
  else{
    ptrav=head;
    while(ptrav->next!=NULL)
    {
      ptrav=ptrav->next;
    }
    ptrav->next=pnew;
  }
}
void addatbeg()
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=40;
    new->next=head;
    head=new;
}
void display()
{
  struct node *ptrav;
  ptrav=head;
  while(ptrav!=NULL)
  {
    printf("%d-%p->\n",ptrav->data,ptrav->next);
    ptrav=ptrav->next;
  }
  printf("NULL\n");
}
int main()
{
  create(10);
  create(20);
  create(30);
  display();
  addatbeg();
  display();
}