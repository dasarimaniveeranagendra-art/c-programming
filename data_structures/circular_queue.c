#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
  int x;
  if((rear+1)%N==front){
    printf("queue is full\n");
    return;
  }
  printf("enter number:");
  scanf("%d",&x);
  if(front==-1 && rear==-1){
    front=rear=0;
    
  }
  
  else{
    rear=(rear+1)%N;
    
  }
  queue[rear]=x;
}
void dequeue(){
  if(front==-1 && rear==-1){
    printf("queue is empty\n");
  }
  else if(front==rear){
    printf("deleted element is:%d\n",queue[front]);
    front=rear=-1;
  }
  else{
    printf("deleted element is :%d\n",queue[front]);
    front=(front+1)%N;
  }
}
void display(){
  int i=front;
  if(front==-1 && rear==-1){
    printf("queue is empty\n");
  }
  else{
    printf("queue is:");
    while(i!=rear){
      printf("%d ",queue[i]);
      i=(i+1)%N;
    }
    printf("%d ",queue[rear]);
  }
  printf("\n");
}

void peek(){
  if(front==-1 && rear==-1){
    printf("list is empty\n");
  }
  else{
    printf("front element is:%d\n",queue[front]);
  }
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