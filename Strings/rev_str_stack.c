#include<stdio.h>
#include<string.h>
char stk[30];
int top=-1;
void push(char c){
  top++;
  stk[top]=c;
}
void pop(){
  while(top!=-1){
    printf("%c",stk[top]);
    top--;
  }
}
int main(){
  char str[30];
  int i;
  printf("enter the string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    push(str[i]);
  }
  
  pop();
}