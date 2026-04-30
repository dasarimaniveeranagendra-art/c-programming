#include<stdio.h>
#include<string.h>
int len(char *str);
int main(){
  char str[]="mani";
  int length;
  length=strlen(str);
  printf("length=%d\n",length);
}
int len(char *str){
  int count=0;
  while(str[count]!='\0'){
    count++;
  }
  return count;
}