#include<stdio.h>
#include<stdlib.h>
typedef struct node {
  int data;
  struct node *next;
}node;
node *front=0;
node *rear=0;
void enqueue(){
  int x;
  node *newnode=(node *)malloc(sizeof(node));
  if(newnode==NULL){
    printf("memory allocation failed\n");
    return;
  }
  printf("enter data:");
  scanf("%d",&x);
  newnode->data=x;
  newnode->next=NULL;
  if(rear==NULL){
    front=rear=newnode;
    rear->next=front;
  }
  else{
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
  }
}
void dequeue(){
  node *temp;
  if(front==NULL && rear==NULL){
    printf("queue is empty\n");
    return;
  }
  temp=front;
  printf("deleted element :%d\n",front->data);
  if(front == rear){
    front=rear=NULL;
  }
  else{
    front=front->next;
    rear->next=front;
  }
  free(temp);
}
void display(){
  node *temp=front;
  if(front==NULL && rear==NULL){
    printf("underflow condition\n");
    return;
  }
    printf("queue is:");

    do{
      printf("%d->",temp->data);
      temp=temp->next;
    }
    while(temp!=front);
    printf("front\n");
  
}

void peek(){
  if(front==NULL && rear==NULL){
    printf("queue is empty\n");
  }
  else{
    printf("front is:%d",front->data);
  }
  printf("\n");
}

int main(){
  int n;
  while(1){
    
    printf("enter choice:\n1.enqueue\n2.dequeue\n3.display\n4.peek\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: enqueue();
    break;

    case 2: dequeue();
    break;

    case 3:display();
    break;

    case 4: peek();
    break;
    
    case 5: exit(0);
    break;

    default: printf("invalid case\n");
      
    }
  }
}
