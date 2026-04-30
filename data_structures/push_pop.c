#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1; 
void push(){
  int x;
  if(top==N-1){
    printf("stack overflow\n");
    return;
  }
  printf("enter element to be pushed:");
  scanf("%d",&x);
  top++;
  stack[top]=x;
}
void pop(){
  if(top==-1){
    printf("stack underflow\n");
    return;
  }
  printf("poped element:%d\n",stack[top]);
  top--;
}
void display(){
  if(top==-1){
    printf("stack empty\n");
    return;
  }
  int i;
  printf("elements present in stack:");
  for(i=top;i>=0;i--){
    printf("%d ",stack[i]);
  }
  printf("\n");
}
int main(){
  int n;
  while(1){
    printf("enter choice: \n1:push \n2:pop \n3:display \n4:exit \n");
    scanf("%d",&n);
    switch (n)
    {
      case 1:push();  
        break;

      case 2:pop();
        break;;
      case 3:display();
        break;

      case 4:
        exit(0);
      default:
        printf("invalid choice\n");
    }
  }
}