#include<stdio.h>
int main(){
  int num=1234;
  char str[20];
  sprintf(str,"%d",num);
  printf("string=%s\n",str);
}