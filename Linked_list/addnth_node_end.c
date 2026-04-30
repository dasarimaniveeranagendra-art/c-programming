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
node *addnthnode_end(node *head,int n,int newdata){
  int len=0;
  node *temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  if(n>len || n<1){
    printf("invalid node");
    return head;
  }
  int res=len-n;
  if(res==0){
    node *newnode=createnode(newdata);
    newnode->next=head;
    return newnode;
  }
  temp=head;
  for(int i=1;i<res;i++){
    temp=temp->next;
  }
  node *newnode=createnode(newdata);
  newnode->next=temp->next;
  temp->next=newnode;
  return head;
  
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
  int i,data,n,pos,newdata;
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
  printf("enter position:");
  scanf("%d",&pos);

  printf("enter new data:");
  scanf("%d",&newdata);
  head=addnthnode_end(head,pos,newdata);
  printlist(head);
}