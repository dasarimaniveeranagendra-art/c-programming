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
node *linear_search(node *head,int key){
  while(head!=NULL){
    if(head->data==key){
      return head;
    }
    head=head->next;
  }
  return NULL;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
}
int main(){
  int i,data,n,key;
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

  printf("enter key:");
  scanf("%d",&key);
  
  node *result=linear_search(head,key);

  if(result!=NULL){
    printf("key %d found\n",key);
    printf("adderess=%p\n",(void*)result);
  }
  else{
    printf("key %d not found\n",key);
  }
}