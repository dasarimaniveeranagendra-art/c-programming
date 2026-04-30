#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
int large,small;
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
node *large_small(node *head){
  node *ptr=head;
  large=head->data;
  small=head->data;
 
  while (ptr!=NULL)
  {
    if(ptr->data>large){
      large=ptr->data;
    }
    if(ptr->data<small){
      small=ptr->data;
    }
    ptr=ptr->next;
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

  large_small(head);
  

  printf("large element:%d\n",large);

  printf("small element:%d\n",small);
}