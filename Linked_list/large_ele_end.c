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
node *large_ele_end(node *head){
  if(head==NULL || head->next==NULL){
    return head;
  }
  node *curr=head,*maxnode=head,*prev=NULL,*maxprev=NULL;
  while(curr){
    if(maxnode->data <curr->data){
      maxnode=curr;
      maxprev=prev;
    }
    prev=curr;
    curr=curr->next;
  }
  if(maxnode->next==NULL){
    return head;
  }
  if(maxprev==NULL){
    head=maxnode->next;
  }
  else{
    maxprev->next=maxnode->next;
  }
  node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=maxnode;
  maxnode->next=NULL;
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

  head=large_ele_end(head);
  printf("after changing elements:");
  printlist(head);
}