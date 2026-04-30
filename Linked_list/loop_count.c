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
node *loop_count(node *head){
  node *fast=head;
  node *slow=head;
  while(fast && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      int count=1;
      node *temp=slow->next;
      while(temp!=slow){
        count++;
        temp=temp->next;
      }
      return count;
    }
    
  }
  return 0;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
}
int main(){
  node *head=createnode(10);
  head->next=createnode(20);
  head->next->next=createnode(30);
  head->next->next->next=createnode(40);
  head->next->next->next->next=head->next;

  int count_loop=loop_count(head);
  
  if(count_loop>0){
    printf("loop detected\n");
    printf("length of loop=%d\n",count_loop);
  }
  else{
    printf("loop not detected\n");
  }
}