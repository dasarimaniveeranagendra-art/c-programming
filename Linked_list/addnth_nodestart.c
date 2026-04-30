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
node *add_nth_nodestart(node *head,int n,int newdata){
  node *temp=head;
  int i;
  for(i=1;i<n && temp!=NULL;i++){
    temp=temp->next;
  }
  node *newnode=malloc(sizeof(node));
    newnode->data=newdata;
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
  int i,data,n,newdata;
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
  printf("original data:");
  printlist(head);
  int position;
  printf("enter position:");
  scanf("%d",&position);
  printf("enter nth node:");
  scanf("%d",&newdata);
  head=add_nth_nodestart(head,position,newdata);
  printlist(head);
  //printf("\n");
}