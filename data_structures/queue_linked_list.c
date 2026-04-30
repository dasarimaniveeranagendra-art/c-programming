#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(){
  int x;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  
  if(newnode==NULL){
    printf("memory allocation failed\n");
    return;
  }
  
  printf("enter element:");
  scanf("%d",&x);
  newnode->data=x;
  newnode->next=NULL;
  if(front==NULL &&rear==NULL){
    front=rear=newnode;
  }
  else{
    rear->next=newnode;
    rear=newnode;
  }
}

void display(){
  struct node *temp;
  if(front==NULL && rear==NULL){
    printf("list  is empty\n");
  }
  else{
    temp=front;
    while(temp!=NULL){
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
  }
}

void dequeue(){
  struct node *temp;
  
  if(front==NULL && rear==NULL){
    printf("list is empty\n");
  }
  else{
    temp=front;
    printf("deleted elment:%d\n",front->data);
    front=front->next;
    if(front==NULL){
      rear=NULL;
    }
    free(temp);
  }
}
void peek(){
  if(front==NULL && rear==NULL){
    printf("list is empty\n");
  }
  else{
    printf("front element:%d\n",front->data);
  }
}

int main(){
  int choice;
  while(1){
    printf("enter choice:\n1.enqueue\n2.dequeue\n3.display\n4.peek\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:enqueue();
      break;
      case 2:dequeue();
      break;
      case 3:display();
      break;
      case 4:peek();
      break;
      case 5:exit(0);
      break;
      default:
      printf("invalid case\n");
      
    }
  }
}