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
node *destroy(node *head){
  while(head!=NULL){
    if(head->next==NULL){
      free(head);
      head=NULL;
    }
    else{
      node *curr=head;
      while(curr->next->next){
        curr=curr->next;
      }
      free(curr->next);
      curr->next=NULL;
    }
  }
  return NULL;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
  int i,data,n;
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

  head=destroy(head);

  printf("after destroying list:");

  printlist(head);
}