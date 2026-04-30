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
node *rotate_left(node *head,int k){
  if(head==NULL || head->next==NULL || k==0){
    return head;
  }
  int len=1;
  node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
    len++;
  }
  temp->next=head;
  k=k%len;
  if(k==0){
    return head;
  }
  
  node *newnode;
  node *prev=head;
  for(int i=1;i<k;i++){
    prev=prev->next;
  }
  newnode=prev->next;
  prev->next=NULL;
  return newnode;

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
   
  printf("enter kth pos:");
  scanf("%d",&k);
  
  head=rotate_left(head,k);
  printlist(head);
}