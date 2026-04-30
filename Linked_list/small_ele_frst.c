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
node *small_ele_frst(node *head){
  if(head==NULL || head->next==NULL){
    return head;
  }
  node *curr=head,*minnode=head,*prev=NULL,*minprev=NULL;
  while(curr){
    if(minnode->data > curr->data){
      minnode=curr;
      minprev=prev;
    }
    prev=curr;
    curr=curr->next;
  }
  if(minprev==NULL){
    return head;
  }
  else{
    minprev->next=minnode->next;
    minnode->next=head;
    head=minnode;
  }
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

  head=small_ele_frst(head);
  printf("after changing elements:");
  printlist(head);
}