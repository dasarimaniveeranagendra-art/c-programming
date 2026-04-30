#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;

node *createnode(int data){
  node *newnode=malloc(sizeof(node));
  if(newnode==NULL){
    printf("memory allocation failed\n");
    return NULL;
  }
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
}
node *merge_sortlist(node *list1,node *list2){
  if(list1==NULL){
    return list2;
  }
  if(list2==NULL){
    return list1;
  }
  node *result=NULL;
  if(list1->data<=list2->data){
    result=list1;
    result->next=merge_sortlist(list1->next,list2);
  }
  else{
    result=list2;
    result->next=merge_sortlist(list1,list2->next);
  }
  return result;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
  node *head1=NULL,*tail1=NULL;
  node *head2=NULL,*tail2=NULL;
  node *head=NULL;
  int n,data,i;
  /*first sorted list*/
  printf("enter no.of node:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter %d data for list1:",i+1);
    scanf("%d",&data);
    node *pnew=createnode(data);
    if(head1==NULL){
      head1=tail1=pnew;
    }
    else{
      tail1->next=pnew;
      tail1=pnew;
    }
  }
  
  printf("enter no.of node:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter %d data for list2:",i+1);
    scanf("%d",&data);
    node *pnewnode=createnode(data);
    if(head2==NULL){
      head2=tail2=pnewnode;
    }
    else{
      tail2->next=pnewnode;
      tail2=pnewnode;
    }
  }
  

  printf("list1:");

  printlist(head1);

  printf("list2:");

  printlist(head2);

  head=merge_sortlist(head1,head2);

  printf("merged list:");
  printlist(head);
}