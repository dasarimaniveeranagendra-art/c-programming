#include<stdio.h>
int main(){
  int binary,rem,decimal=0,i=0;
  printf("enter a binary:");
  scanf("%d",&binary);
  while(binary!=0){
    rem=binary%10;
    decimal+=rem*(1<<i);
    binary=binary/10;
    i++;
  }
  printf("decimal number is :%d\n",decimal);
}