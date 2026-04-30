#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[5];
int front=-1;
int rear=-1;
void enqueue(){
  int x;
  if(rear==N-1){
    printf("overflow\n");
    return;
  }

  printf("enter element:");
  scanf("%d",&x);

  if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
  }
  else{
    rear++;
    queue[rear]=x;
  }
}

void dequeue(){
  if(front==-1 && rear==-1){
    printf("list is empty\n");
  }
  else if(front==rear){
    printf("deleted elemente:%d \n",queue[front]);
    front=rear=-1;
  }
  else {
    printf("deleted element:%d ",queue[front]);
    front++;
  }
}
void display(){
  if(front==-1 && rear==-1){
    printf("queue is empty\n");
  }
  else{
    printf("queue elemets are:");
    for(int i=front;i<rear+1;i++){
      printf("%d ",queue[i]);
    }
  }
}

void peek(){
  if(front==-1 && rear==-1){
    printf("underflow\n");
  }

  else{
    printf("front element:%d \n",queue[front]);
  }
}

int main(){
  int n;
  while(1){
    printf("enter choice:\n1.enqueue\n2.dequeue\n3.display\n4.peek\n");
    scanf("%d",&n);
    switch(n){
      case 1: enqueue();
      break;

      case 2:dequeue();
      break;

      case 3:display();
      break;

      case 4:peek();
      break;

      case 5:exit(0);

      default:printf("invalid case\n");
    }
  }
}

