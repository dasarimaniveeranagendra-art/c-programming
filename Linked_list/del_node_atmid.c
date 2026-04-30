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
node *del_node_mid(node *head){
  if(head==NULL){
    return head;
  }
  if(head->next==NULL){
    free(head);
    return head;
  }
  node *slow=head,*fast=head,*prev=NULL;
  while(fast && fast->next && fast->next->next){
    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
  }
  prev->next=slow->next;
  free(slow);
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
  head=del_node_mid(head);
  printf("after deleting node from middle:");
  printlist(head);
}