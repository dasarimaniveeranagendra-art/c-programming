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
node *rev_part_node(node *head,int left,int right){
  if(head==NULL||head->next==NULL){
    return head;
  }
  node *dummy=malloc(sizeof(node));
  dummy->next=head;
  node *ptr=dummy;
  for(int i=1;i<left;i++){
    ptr=ptr->next;
  }
  node *curr=ptr->next;
  node *nextnode=NULL;
  for(int i=0;i<right-left;i++){
    nextnode=curr->next;
    curr->next=nextnode->next;
    nextnode->next=ptr->next;
    ptr->next=nextnode;
  }
  node *result=dummy->next;
  free(dummy);
  return result;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
}
int main(){
  int i,data,n,right,left;
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
  printf("enter left position:");
  scanf("%d",&left);

  printf("enter right position:");
  scanf("%d",&right);

  head=rev_part_node(head,left,right);
  printlist(head);
}