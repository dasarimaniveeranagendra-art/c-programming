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
node *loop_detection(node *head){
  node *slow=head,*fast=head;
  while(slow && fast && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      return head;
    }
  }
  return 0;
  
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
   node *head=createnode(10);
   head->next=createnode(20);
   head->next->next=createnode(30);
   head->next->next->next=createnode(40);
   head->next->next->next->next=head->next;
   if(loop_detection(head)){
    printf("loop detected\n");
   }
   else{
    printf("loop not detected\n");
   }
    
}