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
node *del_nth_noderev(node *head,int k){
  node *fast=head,*slow=head;
  for(int i=1;i<=k;i++){
    fast=fast->next;
  }
  if(fast==NULL){
    return head->next;
  }
  while(fast->next!=NULL){
    fast=fast->next;
    slow=slow->next;
  }
  node *delnode=slow->next;
  slow->next=slow->next->next;
  free(delnode);
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
  printf("original list:");

  printlist(head);

  printf("enter element to del:");
  scanf("%d",&k);

  head=del_nth_noderev(head,k);
  printlist(head);

}