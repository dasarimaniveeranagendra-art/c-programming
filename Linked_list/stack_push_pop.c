#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
  int data;
  struct node *next;
}node;
node *top=NULL;
void push(){
  int x;
  node *newnode=malloc(sizeof(node));
  printf("enter data:");
  scanf("%d",&x);
  newnode->data=x;
  newnode->next=top;
  top=newnode;
}
void display(){
  node *temp=top;
  if(top==0){
    printf("stack empty\n");
    return;
  }
  else{
    while(temp!=NULL){
      printf("%d->",temp->data);
      temp=temp->next;
    }
  }
}
void peek(){
  if(top==0){
    printf("stack empty\n");
    return;
  }
  else{
    printf("top elemet:%d->",top->data);
  }
}
void pop(){
  node *temp=top;
  if(top==NULL){
    printf("stack underflow\n");
    return;
  }
  else{
    printf("%d->",temp->data);
    top=top->next;
    free(temp);
  }
}
void main(){
  int n;
  while(1){
    printf("\nenter choice: \n1:push \n2:pop \n3:peek \n4:display \n5:exit \n");
    scanf("%d",&n);
    switch (n)
    {
      case 1:push();
        break;
      case 2:pop();
        break;
      case 3:peek();
        break;
      case 4:display();
        break;
      case 5:exit(0);
      default:
        printf("invalid choice\n");
    }
  }
}