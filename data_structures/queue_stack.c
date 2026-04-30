#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1
int count=0,i;
int a,b;
void enqueue(){
  int x;
  printf("enter data:");
  scanf("%d",&x);
  push1(x);
  count++;
}
void push1(){
  int data;
  if(top==N-1){
    printf("overflow\n");
  }
  else{
    top1++;
    s1[top1]=data;
  }
}
void dequeue(){
  if(top==-1 && top2==-1){
    printf("queue is empty\n");
  }
  else{
    for(i=0;i<count;i++){
      a=pop1();
      push2(a);
    }
    b=pop2();
    printf("%d",b);
  }
}
int pop1(){
  return s1[top1--];
}
int pop2(){
  return s2[top2--];
}
void display(){
  for(i=0;i<=top1;i++){
    printf("%d",s1[i]);
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

