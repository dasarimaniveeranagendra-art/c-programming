#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define max 100
char stack[max];
char infix[max],postfix[max];
int top=-1;

void inTopost();
void push(char);
char pop();
int isempty();
int precedence(char);
int main(){
  printf("enter a infix:");
  fgets(infix,max,stdin);

  inTopost();
  
  printf("Postfix expresion :%s\n",postfix);
}

void inTopost(){
  int i,j=0;
  char symbol,next;
  int len=strlen(infix);
  for(i=0;i<len;i++){
    symbol=infix[i];
    switch(symbol){
      case '(': 
                push(symbol);
                break;
      case ')': 
                while(!isempty() && (next=pop())!='('){
                  postfix[j++]=next;
                }
                break;
      case '+':
      case '-':
      case '*':
      case '/':
      case '^':
              while(!isempty() && precedence(stack[top])>=precedence(symbol)){
                postfix[j++]=pop();
              }
              push(symbol);
              break;
      case ' ':
      case'\n':
              break;
      default:
              postfix[j++]=symbol;
    }
  }
  while(!isempty()){
    postfix[j++]=pop();
  }
  postfix[j]='\0';
}
void push(char x){
  stack[++top]=x;
  
}
char pop(){
  return stack[top--];
}
int isempty(){
  return top == -1;
}
int precedence(char op){
  switch(op){
    case '+':
    case '-': return 1;
    case '*':
    case '/': return 2;
    case '^': return 3;
  }
}