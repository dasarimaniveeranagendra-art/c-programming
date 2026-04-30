#include<stdio.h>
void sum(int,int);
int main(){
  int x=5,y=10;
  sum(x,y);
}
void sum(int a,int b){
  int sum=0;
  sum=a+b;
  printf("sum=%d\n",sum);
}