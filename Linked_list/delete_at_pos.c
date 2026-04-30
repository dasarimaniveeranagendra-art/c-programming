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
node *del_at_pos(node *head,int pos){
  node *temp=head,*prev=NULL,*next=head;
  next=next->next;
  if(head==NULL||pos<=0){
    return head;
  }
  if(pos==1){
    head=head->next;
    free(temp);
    return head;
  }
  int i;
  for(i=0;i<pos;i++){
    prev=temp;
    temp=temp->next;
    next=next->next;
  }
  prev->next=next;
  free(temp);
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
  int i,data,n,pos;
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
  printf("enter pos:");
  scanf("%d",&pos);
  head=del_at_pos(head,pos);
  printlist(head);
}