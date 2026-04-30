#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push(int n)
{
  if(top>9)
  {
    printf("stack is full\n");
    return;
  }
  top++;
  stack[top]=n;
}
int pop()
{
  if(top==-1)
  {
    printf("stack is empty\n");
    return -1;
  }
  int temp=stack[top];
  top--;
  return temp;
}
void display()
{
  printf("stack: ");
  for(int i=0;i<=top;i++)
  {
    printf("%d ",stack[i]);
  }
  printf("\n");
}
int main(void)
{
  int n;
  while(1){
    printf("enter choice:push->1,pop->2,exit->3\n");
    scanf("%d",&n);
    if(n==3)
    {
      break;
    }
    if(n==1)
    {
      printf("enter element to be pushed:");
      scanf("%d",&n);
      push(n);
      display();
    }
    if(n==2){
      int t=pop();
      printf("enter element to be pop:%d\n",t);
      display();
    }
  }
  display();
}