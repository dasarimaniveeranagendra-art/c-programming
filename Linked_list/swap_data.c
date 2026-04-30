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
node *swap_data(node *head){
  node *curr=head;
  if(head==NULL ||head->next==NULL){
    return head;
  }
  while(curr && curr->next!=NULL){
    int temp=curr->data;
    curr->data=curr->next->data;
    curr->next->data=temp;
    curr=curr->next->next;
    
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
  head=swap_data(head);
  printlist(head);
}