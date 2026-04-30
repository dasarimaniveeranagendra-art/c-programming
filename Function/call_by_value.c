#include<stdio.h>
#include<stdlib.h>
void swap(int,int)//call by value
void swap(int *,int*);//call by reference.
int main(){
  int x=10,y=20;
  printf("before swap x=%d\ny=%d\n",x,y);
  swap(&x,&y);
  printf("after swap x=%d\ny=%d\n",x,y);
}
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  printf("a=%d\nb=%d\n",*a,*b);
}