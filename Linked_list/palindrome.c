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
node *rev(node *head){
  node *curr=head,*prev=NULL,*next=head;
  while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
}
void palindrome(node *head){
  if(head==NULL ||head->next==NULL){
    printf("palindrome\n");
    return;
  }
  node *fast=head,*slow=head;
  while(fast && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  node *first=head;
  node *second=rev(slow);
  
  while(second!=NULL){
    if(first->data!=second->data){
      printf("not palindrome\n");
      return;
    }
    first=first->next;
    second=second->next;
  }
  printf("palindrome\n");
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
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
  printlist(head);

  palindrome(head);

}