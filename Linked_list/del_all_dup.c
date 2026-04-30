#include<stdio.h>
#include<stdlib.h>
typedef struct node {
  int data;
  struct node *next;
}node;
node *createnode(int data){
  node *new=malloc(sizeof(node));
  if(new==NULL){
    return new;
  }
  new->data=data;
  new->next=NULL;
  return new;
}
node *del_all_dup(node *head){
  node *curr=head,*prev=NULL,*temp=head;
  while(curr!=NULL){
    prev=curr;
    temp=curr->next;
    while(temp!=NULL){
      if(curr->data==temp->data){
        prev->next=temp->next;
        free(temp);
        temp=prev->next;
        
      }
      else{
        prev=temp;
        temp=temp->next;
      }
    }
    curr=curr->next;
  }
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
  node *head=NULL,*tail=NULL;
  int data,n,i;
  printf("enter no.of node:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter %d data:",i+1);
    scanf("%d",&data);
    node *newnode=createnode(data);
    if(head==NULL){
      head=tail=newnode;
    }
    else{
      tail->next=newnode;
      tail=newnode;
    }
  }

  printf("origibnal list:");

  printlist(head);

  head=del_all_dup(head);

  printlist(head);
}