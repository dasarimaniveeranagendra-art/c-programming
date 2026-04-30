#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
node *createnode(int data){
  node *newnode=malloc(sizeof(node));
  if(newnode==NULL){
    return newnode;
  }
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
}
node *sort_list(node *head){
  node *temp=head,*temp1=head;
  for(temp=head;temp!=NULL;temp=temp->next){
    for(temp1=temp->next;temp1!=NULL;temp1=temp1->next){
      if(temp->data>temp1->data){
        int num=temp->data;
        temp->data=temp1->data;
        temp1->data=num;
      }
    }
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
  int data,n;
  int i;
  printf("enter no.of nodes:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter %d data:",i+1);
    scanf("%d",&data);
    node *pnew=createnode(data);
    if(head==NULL){
      head=tail=pnew;
    }
    else{
      tail->next=pnew;
      tail=pnew;
    }
  }
  printf("original list:");

  printlist(head);

  head=sort_list(head);

  printlist(head);
}