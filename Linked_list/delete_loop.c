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
node *loop_del(node *head){
  node *fast=head;
  node *slow=head;
  while(fast && fast->next!=NULL){
    //prev=slow;
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      slow=head;
      node *prev=NULL;
      while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
      }
      prev->next=NULL;
      return head;
    }
    
  }
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
}
int main(){
  int i,data,n,pos;
  node *tail=NULL;
  node *head=createnode(10);
  head->next=createnode(20);
  head->next->next=createnode(30);
  head->next->next->next=createnode(40);
  head->next->next->next->next=head->next;
  //printlist(head);

  head=loop_del(head);
  printf("after deliting loop:");

  printlist(head);
}