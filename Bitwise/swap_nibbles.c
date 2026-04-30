#include<stdio.h>
int printbinary(unsigned int num){
  for(int i=7;i>=0;i--){
    printf("%d",(num>>i)&1);
  }
  printf("\n");
}
int main(){
  int num;
  printf("enter a num:");
  scanf("%d",&num);
  printf("before swapping nibbles:");
  printbinary(num);
  num=((num<<4)|(num>>4));
  printf("after swapping nibbles:");
  printbinary(num);

}