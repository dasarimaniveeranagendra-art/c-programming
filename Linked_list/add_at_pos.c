#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
node *createnode(int data){
  node *new=malloc(sizeof(node));
  if(new==NULL){
    printf("memory failed");
    return new;
  }
  new->data=data;
  new->next=NULL;
  return new;
}
node *add_at_pos(node *head,int pos,int data){
  node *temp=head;
  printf("enter pos:");
  scanf("%d",&pos);
  if(head==NULL||pos<=0){
    return head;
  }
  printf("enter data:");
  scanf("%d",&data);
  for(int i=0;i<pos;i++){
    temp=temp->next;
  }
  node *pnew=malloc(sizeof(node));
  pnew->data=data;
  if(pos==1){
    pnew->next=head;
    head=pnew;
    return head;
  }
  pnew->next=temp->next;
  temp->next=pnew;
  return head;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
}
int main(){
  int i,data,n,pos;
  node *head=NULL,*tail=NULL;
  printf("enter no.of node:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter %d data :",i+1);
    scanf("%d",&data);
    node *newNode=createnode(data);
    if(head==NULL){
      head=tail=newNode;
    }
    else{
      tail->next=newNode;
      tail=newNode;
    }
        
  }
  printlist(head);
  head=add_at_pos(head,pos,data);
  printlist(head);
}