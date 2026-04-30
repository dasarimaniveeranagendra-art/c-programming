#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int i,count=0;
void push1(int data){
  if(top1==N-1){
    printf("overflow\n");
  }
  else{
    
    s1[++top1]=data;
  }
}
void push2(int data){
  if(top2==N-1){
    printf("overflow\n");
  }
  else{
    
    s2[++top2]=data;
  }
}
int pop1(){
  if(top1==-1){
    printf("underflow\n");
    return -1;
  }
  return s1[top1--];
}
int pop2(){
  if(top2==-1){
    printf("underflow\n");
    return -1;
  }
  return s2[top2--];
}
void enqueue(int x){
  push1(x);
  count++;
}
void dequeue(){
  if(top1==-1 && top2==-1){
    printf("queue is empty\n");
  }
  else{
    int a;
    for(i=0;i<count;i++){
      a=pop1();
      push2(a);
    }
    int b;
    printf("%d ",b);
    count--;
    for(i=0;i<count;i++){
      a=pop2();
      push1(a);
    }
  }
}
void display(){
  printf("queue:");
  for(i=0;i<=top1;i++){
    printf("%d ",s1[i]);
  }
  printf("\n");
}
int main(){
  int n,x;
  while(1){
    printf("enter choice: \n1:enqueue \n2:dequeue \n3:display \n4:exit \n");
    scanf("%d",&n);
    switch (n)
    {
      case 1:
        printf("enter value:");
        scanf("%d",&x);
        enqueue(x);  
        break;

      case 2:
        dequeue();
        break;
      case 3:display();
        break;

      case 4:
        exit(0);
      default:
        printf("invalid choice\n");
    }
  }
}