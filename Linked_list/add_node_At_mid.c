#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
node *createnode(int data){
  node *new=malloc(sizeof(node));
  if(new==NULL){
    printf("memory failed\n");
    return new;
  }
  new->data=data;
  new->next=NULL;
  return new;
}
node *add_node_atmid(node *head,int data){
  if(head==NULL){
    return head;
  }
  node *pnew=malloc(sizeof(node));
  pnew->data=data;
  node *slow=head,*fast=head;
  while(fast && fast->next && fast->next->next){
    slow=slow->next;
    fast=fast->next->next;
  }
  pnew->next=slow->next;
  slow->next=pnew;
  return head;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL");
}
int main(){
  int i,data,n,k;
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
  printf("\nenter data to be added at mid:");
  scanf("%d",&data);
  head=add_node_atmid(head,data);
  printf("after adding:");
  printlist(head);
  printf("\n");
}