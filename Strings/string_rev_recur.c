#include<stdio.h>
void str_rev_rec(char *str){
  while(*str=='\0'){
    return;
  }
  str_rev_rec(str+1);
  printf("%c",*str);
}
int main(){
  char str[20];
  printf("enter a string:");
  scanf("%s",str);
  printf("reverse:");
  str_rev_rec(str);
}